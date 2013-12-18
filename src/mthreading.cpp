/*-------------------------------------------------------------------
Multithreading main file for implementation of various Multhreading
concepts for learning and understanding the concepts

@Author Ankit Singh (ankit@devgeek.co)
@Copyright 2013 devgeek.co
--------------------------------------------------------------------*/

#include "mthreading.h"

void thread_worker(int seq) {
  cout << "\n Thread Seq. Number= " << seq << endl;
}


int main(int argc, char** argv) {
  
  int i, max, dev = 5;

  if(argc<2){
    cout << "Syntax Error!" << endl;
    cout << "Usage:" << endl;
    cout << "\t" << argv[0] << "Multithreading Options\n" << endl;
    return -1;
  }
  
  max = atoi(argv[1]);
  cout << "\n Maximum Number of Numbers to Process; " << max << "\n\n";

  cout << "\n###### Multithreading Operations Starts Here ######";
  
  // Generating sequential thread
  for(i=0; i<=max; ++i) {
    if(i % dev == 0) {
      cout << "\n Create New thread for processing numbers after " << i;
    boost::thread new_thread(&thread_worker, (int) i);
    new_thread.join();
    } 
  }

  return 0;
}
