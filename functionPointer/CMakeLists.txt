set(src functionPointerTest.h
        functionPointerTest.cpp)

add_library(s_functionPointer STATIC ${src})
#set_target_properties(s_functionPointer PROPERTIES LINKER_LANGUAGE CXX)