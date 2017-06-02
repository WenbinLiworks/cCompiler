#ifndef _BLOCK_H_
#define _BLOCK_H_

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include "tree.h"
using namespace std;



//变量节点
struct varNode {
	string name;
	string type;
	int num = -1;
	bool useAddress = false;
};

//函数节点
struct funcNode {
	bool isdefinied = false;
	string name;				//函数名
	string rtype;				//函数返回类型
	vector<varNode> paralist;	//记录形参列表
};

struct arrayNode {
	string name;
	string type;
	int num = -1;
};

//数组节点


//block的内容
class Block {
public:
	funcNode func;	//如果是函数，记录函数名
	bool isfunc = false;//记录是否是函数
	map<string, struct varNode> varMap;		//变量的map
	map<string, struct arrayNode> arrayMap;	//数组的map
	int breakLabelNum = -1;
	bool canBreak = false;
};

#endif // !_BLOCK_H_
