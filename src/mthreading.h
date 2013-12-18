/*-------------------------------------------------------------------
Multithreading Header file for implementation

@Author Ankit Singh (ankit@devgeek.co)
@Copyright 2013 devgeek.co
--------------------------------------------------------------------*/

#ifndef __MULT_UTIL_H_INCLUDED__
#define __MULT_UTIL_H_INCLUDED__

#include <iostream>
#include <boost/thread.hpp>

using namespace std;

void thread_worker(int);

// Class mthreading
class mthreading {
 public:
  void test_threads();

};

#endif __MULT_UTIL_H_INCLUDED__
