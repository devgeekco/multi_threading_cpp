cmake_minimum_required(VERSION 2.8)
project( multithreading )

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON) 
set(Boost_USE_STATIC_RUNTIME OFF)
FIND_PACKAGE( Boost 1.53.0 COMPONENTS system thread REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
SET(mth_SOURCES src/mthreading.cpp)	
SET(mth_HEADERS src/mthreading.h)
add_executable(bin/mthread ${mth_SOURCES} ${mth_HEADERS})
add_definitions( -DBOOST_ALL_NO_LIB )
add_definitions( -DBOOST_ALL_DYN_LINK )
target_link_libraries(bin/mthread ${Boost_LIBRARIES} ${Boost_SYSTEM_LIBRARY} ${Boost_THREAD_LIBRARY} ) 
