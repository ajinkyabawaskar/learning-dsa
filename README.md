## Competitive Programming


#### The secrets of competitive programming learnt through WA, TLE and lost ratings.

(╯°□°）╯︵ ┻┻

Solutions to live contests are not uploaded here, and never will be.

### About this repository:
* Website- [CodeChef](https://www.codechef.com/)
* Language - C++
* Folder name => {contest_code}
  * Find contest at codechef.com/{contest_code}
* File name => {problem_code}
  * Find problem, test cases, expected output at codechef.com/problems/{problem_code}
* Utility PowerShell script:
  * ```.\run.ps1 <preference> <filename>```
  * ```<preference>``` could be:
   * 0 to only execute the file
   * 1 to compile and execute the file
  * ```<filename>``` is name of the file including extension.


### Tips and Tricks:
These tips are not in any logical sequence and neither does it portray the best coding practices. I am writing them down here as notes of my competitive programming journey.

* Use Fast IO instead of regular cin, cout.
  * ```#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);```
  *Include ```fast;``` in your main method.
* Use ```%``` or ```/``` in place of repetitive additions/subtractions.
* Use ```#include <bits/stdc++.h>``` in place of all other includes. (Is a bad programming practice)
* If you want to count the number of digits required to make the sum of digits equal to a given number, then keep subtracting 9 from the number, and count how many times you subtracted.
* The ```a[i] &a[j]==a[i]``` and ```a[i]==a[i]&a[j]``` will give different answers because of operator precedence. To first calculate bitwise AND and then compare, use ```((a[i]&a[j]) == a[i])```
* Do not implement a recursive approach on problems that can be solved much easily using an iterative approach. See: ```ZCO14003```
* In CodeChef contests (long challenges, cook-offs, lunchtime and ranked contests) the first question tends to be of cakewalk difficulty level. While the second problem is of easy difficulty level, so overall, if you are a beginner, try and attempt these 2 questions and do not stress over the remaining questions. But attempt them after you're done with first two.
* Competitive programming will require you to focus on simple programming aspects like loops and conditional statements. Then it moves towards complexity analysis and simpler data structures like unordered maps and vectors. Then you’ll need to have knowledge of algorithms to recognise whether it is an optimization problem, etc. Then it goes around with more advanced data structures like trees, etc.
* Look at the constraints to see what algorithm is required. If the input size is 10<sup>6</sup> then you can try and have an O(n<sup>2</sup>) solution. If input size is 10<sup>6+</sup> then you have to think about a O(n) solution. On CodeChef, 10<sup>8</sup> operations shall be performed in 1 second.
* In problems involving calculating the factorial of very large numbers and large test cases, you don’t actually have to calculate the factorial. Observe the prime factors, etc to get a direct formula instead of calculating factorial and then performing operation on each result.
* Use the ```result=condition?case1:case2``` instead of ```if.. else..``` whenever applicable, to have more readable code.
* Do not use ```endl```, it might slow down writing output to file in case of 10<sup>5+</sup> lines being written. Either use ```“\n”``` or use ```#define endl “\n”``` in your template.