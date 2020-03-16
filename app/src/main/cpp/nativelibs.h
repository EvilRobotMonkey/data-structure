//
// Created by 王涛 on 2020/3/16.
//
#ifndef DATA_STRUCTURE_NATIVELIBS_H
#define DATA_STRUCTURE_NATIVELIBS_H

#include <android/log.h>

#include <string>
#include <jni.h>
typedef int TempType;
#define MAX_TREE_SIZE 100;



#define LOG_TAG TAO_OAT

#define LOGI(...)__android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

using namespace std;
//双亲表示法
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





//孩子表示法
typedef struct CTNode                    /* 结点结构*/
{
    TempType child;                /* 结点数据*/
    struct CTNode *next;                /* 下一个孩子结点*/
} *ChildPtr;

typedef struct                /* 表头结构*/
{
    TempType data;            /* 结点数据*/
    ChiledPtr firstChild;                /* 孩子链表头指针*/
}CTBox;

typedef struct                /* 树结构*/
{
    CTBox nodes[MAX_TREE_SIZE];                /* 结点数组*/
    int r,n;                /* 树中根的位置和结点数*/
}CTree;




//孩子兄弟
typedef struct CSNode                    /* 结点结构*/
{
    TempType data;                /* 结点数据*/
    struct CSNode *firstchild, *rigthsib;                /* 第一个孩子结点， 该结点的右兄弟结点*/
} CSNode, *CSTree;



//二叉树的二叉列表表示法
typedef struct BiTNode                    /* 结点结构*/
{
    TempType data;                /* 结点数据*/
    struct BiTNode *lchild, *rchild;                /* 左右孩子指针*/
} BiTNode, *BiTree;



//线索二叉树

typedef enum{Link, Thread}    PointerTag;                /* Link表示存储的是孩子结点， Thread表示存储的是前驱后继*/
typedef struct BiThrNode                    /* 结点结构*/
{
    TempType data;                /* 结点数据*/
    struct BiThrNode *lchild, *rchild;                /* 左右孩子指针*/
    PointerTag LTag;                                                    /* 左标志*/
    PointerTag RTag;                                                    /* 右标志*/
} BiThrNode, *BiThrTree;




#endif //DATA_STRUCTURE_NATIVELIBS_H
