# Competitive Coding Resources
### This comprises of all the resources for competitive coding that I've come across  along with some beginner tips on getting started with competitive programming

## Table of Content
  - [Getting Started with Competitive Programming](#getting-started-with-competitive-programming)
    - [What is Competitive Programming](#what-is-competitive-programming)
    - [Choosing a Programming Language](#choosing-a-programming-language)
    - [Choosing your online judge](#choosing-your-online-judge)
    - [Creating and Maintaining your template](#creating-and-maintaining-your-template)
  - [Getting better at competitive programming](#getting-better-at-competitive-programming)
    - [Upsolving](#upsolving)
    - [Solving by tags](#solving-by-tags)
    - [Hoping between websites](#hopping-between-websites)
    - [Theorotical DSA vs Practice](#theorotical-dsa-vs-practice)
    - [Resources to follow](#resources-to-follow)
        - [Youtube Channels](#youtube-channels)
        - [Discord Servers](#discord-channels)
        - [Subreddits](#sub-reddit)
        - [Useful Codeforces Blogs](#codeforces-blogs)

---
## Getting Started with Competitive Programming

### What is Competitive Programming 
  Programming, at its core is problem solving using code. Competitive programming makes it a sport where you compete with other people to solve some problems in a limited time period. As per [Wikipedia](https://en.wikipedia.org/wiki/Competitive_programming), "Competitive programming is a mind sport usually held over the Internet or a local network, involving participants trying to program according to provided specifications."

  You will be given a problem statement similar to [this](https://codeforces.com/problemset/problem/4/A)

   <img src="/images/problem_example.png" alt="example_problem" style="height: 100px; width:100px;"/>

  If you observe carefully, the problem statement can be summarised to : 
  Print "Yes" if the number is even, else print "No". This is one of the skills you'll need to get good at i.e. - Reading problems. 

  The solution for the above program can be simply written in C++ as 

```c++
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
```

  Along with the sample test cases given with the problem, your code will be judged against multiple secret cases and will be accepted only when it gives correct result for all of them under the given constraints (time and memory).

  So Competitive Programming consists of :
  1. Reading the given problem statement 
  2. Identifying the underlying problem
  3. Writing code which will give correct answer for all the test cases in the given time and memory limit.

  The competitive aspect to this problem solving sport comes from competing against other users. Your score will depend upon the number of times you submit an incorrect solution and the time at which your code is accepted.
<!---
COMMENTS
codeforces practice extension : https://chrome.google.com/webstore/detail/codeforces-practice-track/cnahgdhboflcnojgmeehhhfeoojifonm
codeforces visualizer : https://cfviz.netlify.app/
-->

---
### Choosing a Programming Language

   <img src="/images/speed_comparision.png" alt="speed_comparision" style="height: 100px; width:100px;"/>

  (the above image is sourced from : [this repo](https://github.com/niklas-heer/speed-comparison))

   You can pretty much choose any of the popular languages as most coding sites support a lot of them. Having said that, I have had some bad experiences with Python. I was using python for the first couple months but then I got TLE (time limit exceed error) for a problem. When i wrote the same code in C++, it passed.

   Along with the speed of a language, when you are starting out, it is also important for the language to be used by most competitive programmers as reading other's code after a contest helps a lot in improving.

   So If you aren't super attached to any language, it is always beneficial to use C++. With the STL library, coding in C++ feels just like coding in any modern higher level language (with respect to competitive coding atleast :D).

---
### Choosing your online judge

  An online judge is an online system to test programs in programming contests. They are also used to practice for such contests. 
  
  [Here](https://codeforces.com/blog/entry/59804) is a nice discussion to help you compare different online judges.

  [Codeforces](https://codeforces.com/) is one of the most famous online judges in the world. Currently, there are 5000+ problems. It has (most of the time) good problems with frequent contests, quick rating changes (withing a day) as well as a very supportive community. It is the main coding platform I prefer.

  It is also important to not just stick with one website, but instead, practice on different websties as you can fill the gap between two contests on your favorite website, by participating in other website's contests. 
  More on that [here](#hoping-between-websites).

  If you aren't sure which one to go with, I would recommend codeforces. Once you get the hang of competing online, you can later easily transition to using different websites.

---
### Creating and Maintaining your template


 After you solve few problems you'll realise that a lot of the times you end up writing some code that you used in a previous contest. For example, you can have two different problems that require you to check if the number is prime in order to arrive at a solution. 

 In such cases having prewritten code snippets for such similar tasks in your cpp file can save you a lot of time. A template is like a boiler plate code upon which you start writing your solutions.

 Not only this, but if you're using cpp (or even java for that matter) which requires you to write a lot of code (compared to a language like python), it is always useful to define some excessively used code snippets as shorter statements. This will also help you in saving time.
 
 For example,
 ```c++
 #define printVec(vec) for(int i = 0; i < vec.size(); ++i)cout<<vec[i]<<" "; cout<<endl
 ```
 The above snippet lets me print a vector by simply passing it to printVec() as an arguement.


 As you solve more problems you will keep adding more functionality to your template, like a prewritten function for running dfs/bfs given a graph as an input can help you save a lot of time.


 If you don't know where to start when creating a template, I have provided my [template](https://github.com/SnexusG/Competitive-Coding-Resources/blob/master/contest/template.cpp) in this repository. I keep updating it as well. Along with it there also a [clear.py](https://github.com/SnexusG/Competitive-Coding-Resources/blob/master/contest/clear.py) file which basically deletes all the files except itself and the template when run. I use it to delete unwanted code files after a contest.

---
## Getting better at competitive programming

### Upsolving

When you participate in contests, it is very difficult to solve all the problems. In simple words, upsolving is solving problems that you were not able to solve during the contest. Usually its a good idea to solve the easiest 2 unsolved problems from the contest. This helps you learn new techniques and lets you understand where you are lacking.

Here are some useful resources : 

- [Discussion on understanding editorials and uplosving](https://codeforces.com/blog/entry/18757)
- [Problems to upsolve as per your rating](http://a2oj.com/ladders)
- [Codeforces Upsolving Helper](https://codeforces.com/blog/entry/79917)
- [Upsolve.me](https://codeforces.com/blog/entry/79151)
- [How to become a red coder by Erichto](https://www.youtube.com/watch?v=y7169jEvb-Y)
- [Upsolving tips by rachit jain](https://www.youtube.com/watch?v=X-2OUqnUH6U)

---

### Solving by tags

This is useful especially when you have just started with competitive coding and don't have much experience with using dsa in problem solving. On most coding websites you can filter problems by tags e.g. trees, adhoc, math, dp, graphs, etc. 

   <img src="/images/tags.png" alt="problem tags" style="height: 100px; width:100px;"/>


After filtering by tag some websites (e.g. codeforces) also allow you to sort the problems on basis of number of people who solved it successfullyy or the difficulty rating of the problem. Some people prefer sorting by number of solutions submitted, but in my experience sorting by difficulty proves more effective as the first few problems when sorted by difficulty are very basic fundamental problems about that topic that help to get your basics strong.

---

### Hopping Between Websites


Sticking to a single website as your main competing portal is good, but often, different websites have different advantages.

In my exxperience, If you are just starting out, then solving [Atcoder](atcoder.jp) Begineer contests is helpful as it directly tells you what you have to do instead of revolving the problem around a story.

[Codechef](https://www.codechef.com/) has long challenges lasting 10 days to a month where you can take your time to learn a concept when encountered in a problem, and then apply it to solve it.

My intention here is not just to amplify the boons of a particular website (although my bias towards codeforces should be pretty obvious by now). 

A good strategy is to have a main website where you try to increase your rating but depending on the type of practice that suits you, it might be helpful to use other websites as well.

---

### Theorotical DSA vs Practice

You are not going to be able to solve few questions in the begining irrespective of how hard you think. Chances are, you aren't familiar with the optimal data structure or algorithm required to solve the problem under given constraints. 

Learning Data structures and Algorithms is obviously important for becoming good at competitive programming. But, it is also important to not waste time in learning techniques too advanced. A good ratio of solving problems vs learning DSA would be, for every 50 mins spend on problem solving, spend 10 mins on DSA. The DSA time will only decrease as you progress ahead.

[Here's](https://www.youtube.com/watch?v=bVKHRtafgPc) a video by William Lin explaining it further along with other beginner tips.

[GeeksForGeeks](https://www.geeksforgeeks.org/) is also a great website to learn DSA.

---

## Resources To Follow
---

### Youtube Channels 


| Youtube Handle |    Channel Description    |
|---------- |:-------------:|
| [William Lin](https://www.youtube.com/channel/UCKuDLsO0Wwef53qdHPjbU2Q)  | International Grandmaster On Codeforces. His videos mostly consist of screencast of his contests along with some random videos centered around competitive coding| 
| [Errichto](https://www.youtube.com/channel/UCBr_Fu6q9iHYQCh13jmpbrg)  |    The undisputed top contributor on codeforces. Videos on intermediate to advanced algorithmic topics along with frequent contest screencast  |
| [Second Thread](https://www.youtube.com/channel/UCXbCohpE9IoVQUD2Ifg1d1g/videos)  | Grandmaster on Codeforces. Most of his videos are screencast of his contest with good commentary where he often thinks out loud while coming up with a solution |  
| [Rachit Jain](https://www.youtube.com/channel/UC9fDC_eBh9e_bogw87DbGKQ)  | Got into Microsoft as an SDE after his degree in EE from IIT roorkee. His videos focus mostly on DS/ALGO and interview preparation | 
| [Code explainer](https://www.youtube.com/channel/UCU4WrdDLKNSnV0jiiUbKong)  | Video tutorials to div2/3 codeforces rounds, some atcoder contests as well as leet code problems |   
| [Codechef](https://www.youtube.com/user/codechefofficial/videos)  | Official Youtube channel of Codechef | 
| [Code with Demoralizer](https://www.youtube.com/channel/UCGS5ZzcSAymQbWZvNoKOFhQ/videos)  | ICPC world finalist. Video Tutorials for Codeforces problems with advice for getting better at competitive coding | 
| [Code Buddy Official](https://www.youtube.com/channel/UC8Is5LaVSoiO4DYmgi11kfw)  | DS/ALGO/C++ STL tutorials | 
| [take U forward](https://www.youtube.com/channel/UCJskGeByzRRSvmOyZOz61ig)  | DS/ALGO for placement preparation | 
| [Hackerrank](https://www.youtube.com/channel/UCOf7UPMHBjAavgD0Qw5q5ww)  | Official Youtube Channel of Hackerrank | 
