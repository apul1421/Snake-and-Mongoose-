# Snake-and-Mongoose Problem

## Problem 

In Snakeland, there are some snakes and mongooses. They are lined up in a row. The information about how exactly they are lined up it is provided to you by a string of length n. If the i-th character of this string is 's', then it means that there is a snake at the i-th position, whereas the character 'm' denotes a mongoose.

You might have heard about the age-old rivalry between hares and tortoises, but in Snakeland, the rivalry between snakes and mongooses is much more famous. The snakes and the mongooses want to hold a final poll in which the ultimate winner of this age-old battle will be decided. If the snakes get more votes than the mongooses, they will be the ultimate winners. Similarly, if the mongooses get more votes than snakes, they will be the ultimate winners. Obviously, each animal is loyal to their species, i.e. each snake will vote for the snakes to be the ultimate champions and each mongoose for the mongooses.

Tomorrow's the election day. Before the elections, the mongooses decided to cheat. They planned that each mongoose will eat at most one of its neighbor snakes. Two animals are said to be neighbors of each other if they are consecutive to each other in the row. After this, the elections will be held. The mongooses planned in such a way that the number of snakes eaten is maximized. Can you find out who will win the final poll? Output "snakes", "mongooses" or "tie" correspondingly.

Input
First line of the input contains an integer T denoting the number of test cases. The description of T test cases follow.

The only line of each test case contains a string consisting of characters 's' and 'm'.

Output
For each test case output a single line containing "snakes", "mongooses" or "tie" correspondingly (without quotes).

Constraints
1 ≤ T ≤ 100
1 ≤ |s| ≤ 100

## Example

### Input
4
sm
ssm
sms
ssmmmssss

### Output
mongooses
tie
tie
snakes

