#include <jni.h>
#include <string>
#include <sentencepiece_processor.h>
//#include "third-party/sentencepiece/src/sentencepiece_processor.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_nativecapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    sentencepiece::SentencePieceProcessor processor;
    return env->NewStringUTF(hello.c_str());
}
