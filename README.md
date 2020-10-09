# Competitive Coding Resources
### This comprises of all the resources for competitive coding that I've come across 

## Table of Content
1.  [Getting started with Competitive Programming](#getting-started-with-competitive-programming)
    - [Choosing a Programming Language](#programming-language)
    - [Choosing your online judge](#online-judge)
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
