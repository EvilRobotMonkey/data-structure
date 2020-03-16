//
// Created by 王涛 on 2020/3/16.
//
#ifndef DATA_STRUCTURE_NATIVELIBS_H
#define DATA_STRUCTURE_NATIVELIBS_H

#include <android/log.h>

#include <string>
#include <jni.h>

#define LOG_TAG TAO_OAT

#define LOGI(...)__android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

using namespace std;

typedef struct {
    string::data; //结点数据
    int parent; //父节点的位置
    int self; //自己的位置
} PTNode;

typedef struct {
    PTNode nodesize[100];//树最多的结点数
    int r; //根的位置
    int n; //结点数目
} PTtree;


#endif //DATA_STRUCTURE_NATIVELIBS_H
