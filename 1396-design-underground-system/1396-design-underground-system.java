class UndergroundSystem {
    HashMap <Integer, HashMap<String, Integer>> checkinMap ;
    
    HashMap<String, ArrayList<Integer>> avgTimeMap;
    
    public UndergroundSystem() {
        checkinMap = new HashMap();
        
        avgTimeMap = new HashMap();
    }
    
    public void checkIn(int id, String stationName, int t) {
        HashMap <String, Integer> map = new HashMap<>();
        map.put(stationName, t);
        checkinMap.put(id, map);
    }
    
    public void checkOut(int id, String stationName, int t) {
       
        HashMap<String, Integer>  stMap= checkinMap.get(id);
        Object[] startStationSet = stMap.keySet().toArray();
        String startStation = (String)startStationSet[0];
        Integer startTime = stMap.get(startStation);
        String sid = startStation+"|"+stationName;
        sid = sid.toLowerCase();
        Integer timeTaken = (t-startTime);
        
        
        if(avgTimeMap.containsKey(sid)) {
           avgTimeMap.get(sid).add(timeTaken);
        } else {
           ArrayList<Integer> list = new ArrayList();
           list.add(timeTaken);
           avgTimeMap.put(sid, list); 
        }
        
    }
    
    public double getAverageTime(String startStation, String endStation) {
        String id = startStation+"|"+endStation;
        Integer res = 0;
        for (Integer i : avgTimeMap.get(id.toLowerCase()) ) {
            res += i;
        }
        Double timeTaken = Double.valueOf(res/Double.valueOf(avgTimeMap.get(id.toLowerCase()).size()));
        return timeTaken;
    }
}

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem obj = new UndergroundSystem();
 * obj.checkIn(id,stationName,t);
 * obj.checkOut(id,stationName,t);
 * double param_3 = obj.getAverageTime(startStation,endStation);
 */