# Competitive Coding Resources
### This comprises of all the resources for competitive coding that I've come across 

## Table of Content
1.  [Getting started with Competitive Programming](#getting-started-with-competitive-programming)
     - [What is Competitive Programming](#What-is-competitive-programming)
    - [Choosing a Programming Language](#choosing-a-programming-language)
    - [Choosing your online judge](#choosing-your-online-judge)
    - [Create and Maintaining your template](#template)
2. [Getting better at competitive programming](#getting-better)
    - [Upsolving](#upsolving)
    - [Hoping between websites](#different-websites)
    - [Theorotical DSA vs Practice](#patience)
    - [Resources](#resources)
        - [Youtube Channels](#youtube-channels)
        - [Discord Servers](#discord-channels)
        - [Subreddits](#sub-reddit)
        - [Useful Codeforces Blogs](#codeforces-blogs)
3. [??](#profit)


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
### Choosing a Programming Language

   <img src="/images/speed_comparision.png" alt="speed_comparision" style="height: 100px; width:100px;"/>

  (the above image is sourced from : [this repo](https://github.com/niklas-heer/speed-comparison))

   You can pretty much choose any of the popular languages as most coding sites support a lot of them. Having said that, I have had some bad experiences with Python. I was using python for the first couple months but then I got TLE (time limit exceed error) for a problem. When i wrote the same code in C++, it passed.

   Along with the speed of a language, when you are starting out, it is also important for the language to be used by most competitive programmers as reading other's code after a contest helps a lot in improving.

   So If you aren't super attached to any language, it is always beneficial to use C++. With the STL library, coding in C++ feels just like coding in any modern higher level language (with respect to competitive coding atleast :D).


### Choosing your online judge

  An online judge is an online system to test programs in programming contests. They are also used to practice for such contests. 
  
  [Here](https://codeforces.com/blog/entry/59804) is a nice discussion to help you compare different online judges.

  [Codeforces](https://codeforces.com/) is one of the most famous online judges in the world. Currently, there are 5000+ problems. It has (most of the time) good problems with frequent contests, quick rating changes (withing a day) as well as a very supportive community. It is the main coding platform I prefer.

  It is also important to not just stick with one website, but instead, practice on different websties as you can fill the gap between two contests on your favorite website, by participating in other website's contests. 
  More on that [here](#hoping-between-websites).

  If you aren't sure which one to go with, I would recommend codeforces. Once you get the hang of competing online, you can later easily transition to using different websites.
  

