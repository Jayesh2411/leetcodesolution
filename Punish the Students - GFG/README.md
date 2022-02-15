# Punish the Students
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">A Professor conducts a Computer Science paper for <strong>N</strong>&nbsp;students. He had strictly instructed all students to sit according to their roll numbers. However when he started checking the papers, he found out that all the papers were randomly ordered because&nbsp;the students had sat randomly during the exam instead of sitting according to their roll numbers. The order is given in list of integers <strong>roll[ ].</strong>&nbsp;The professor became&nbsp;very angry and he wanted to teach the students a lesson.<br>
He decided&nbsp;to sort the papers according to roll numbers&nbsp;by Bubble Sort and count the number of swaps required for each and every student and deduct as many marks of a student as were the number of swaps required for that student.&nbsp;The marks of every student is given in list of integers <strong>marks[ ]&nbsp;</strong>in the order in which they were sitting.&nbsp;However he also has to maintain the class average&nbsp;greater than or equal to a set minimum <strong>avg</strong>, else he may lose his job. The Professor wants to know whether he should punish the students or save his job.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5 
avg = 68
roll[] = {3, 2, 4, 1, 5}
marks[] = {50, 67, 89, 79, 58}
<strong>Output: </strong>0
<strong>Explanation: </strong>Overall number of swaps required 
is 8. Hence the class average would become
(50 + 67 + 89 + 79 + 58 - 8) / 5 = 67
Since 67 is less than the required minimum (68),
he will not punish the class to save his Job.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6 
avg = 67.5
roll[] = {5, 4, 1, 3, 2, 6}
marks[] = {78, 98, 86, 67, 78, 79}
<strong>Output: </strong>1
<strong>Explanation: </strong>Overall number of swaps required 
is 16. Hence the class average would become
(78 + 98 + 86 + 67 + 78 + 79 - 16) / 6 = 78.33.
Since 78.33 is greater than the required 
minimum (67.5), he will punish the class and 
deduct the marks.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>shouldPunish()&nbsp;</strong>which takes the array&nbsp;<strong>roll[]</strong>&nbsp;describing the order of students while sitting for&nbsp;the exam, the array&nbsp;<strong>marks[]&nbsp;</strong>describing the marks of the students, an integer <strong>N</strong> denoting the number of students and an&nbsp;<strong>avg&nbsp;</strong>denoting the required minimum average that is to be maintained as input parameters and&nbsp;returns 1 if the professor will punish the students or&nbsp;0 otherwise.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N<sup>2</sup>).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong>:<br>
1 ≤ N ≤ 1000</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>