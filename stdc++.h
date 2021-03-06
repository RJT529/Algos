

1.  #include <bits/stdc++.h>

    It is basically a header file that also includes every standard library and stl include file. 
    It is an implementation for precompiled headers.

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
    
5   How to convert string to int in c++:

        string s="12345";
        int x=0;
         
        stringstream convert(s);//object from the class stringstream
                                //convert can be replaced by any valid identifier
        convert>>x;  //the object has the value 12345 and stream it to the integer x
            //now the variable x holds the value 12345

6   memset():

        void * memset ( void * ptr, int value, size_t num );
    
    Fill block of memory
    Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).
    can be used to intialize an array to 0;

