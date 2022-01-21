/**
 * @param {number} n
 * @return {string}
 */
 var countAndSay = function(n) {

    if(n==1) {
        return "1";
    }
    var sol = "";
    var temp = countAndSay(n-1);
    var i,count;
    count=1;
    i=1;
    while(i<temp.length) {
        if(temp[i]==temp[i-1]){
            ++count;
        }
        else {
            sol=sol+count+temp[i-1];
            count=1;
        }
        ++i;
    }
    sol=sol+count+temp[i-1];
    return sol;
};
console.log(countAndSay(24));