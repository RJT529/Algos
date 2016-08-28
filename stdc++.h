

1.  #include <bits/stdc++.h>

    It is basically a header file that also includes every standard library and stl include file. 
    It's an implementation for precompiled headers.

2   ios_base::sync_with_stdio(false);

    This disables the synchronization between the C and C++ standard streams. 
    By default all standard streams are synchronized, which in practice allows you to mix C and C++ style I/O and get sensible
    and expected results. If you disable the synchronization then C++ streams are allowed to have their own independent 
    buffers, which makes mixing C and C++ style I/O an adventure.
  
3   cin.tie(NULL);

    This unties cin from cout. Tied streams ensure that one stream is flushed automatically before each I/O operation on the
    other stream. So if you untie cin from cout you must make sure to manually flush cout every time you want something to
    really be displayed before expecting input on cin.
    
4   vector<int> values(5);
    Will declare a vector of 5 integers.
    
    vector<int> values[5];
    Will declare an array of 5 vectors of integers.

