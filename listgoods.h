#pragma once
#include"date_goods.h"
#include<conio.h>
#include<fstream>
#include<vector>
using namespace std;
#define FILE_PATH "D://fileTest//QuanLiCuaHang.txt"
//extern std::vector<string> id_List;
//extern std::vector<int> amount;
//extern std::vector<string> check_id;
// Danh sach hang hoa
class ListGoods {
	private: 
		int size;
		Node *head;
		Node *tail;
	public:
		ListGoods();
		int getSize();
		Node *makeNode();
		Node *makeNode(Goods data);
		bool isEmpty();
		void output();
		void outputAsTable(int x, int y, int w, int columns, int rows, int color, int titleColor, string contentAlign);
		void insertLast();
		void insertLast(Goods data);
		bool checkCode(string code);
		~ListGoods();
		//Khai bao them ham 
		void Add();
		void Find_2();
		Node* Find_1();
		friend void writeDataToFile(ListGoods list);
		friend void readDataFromFile(ListGoods &list);
		void Change();
		void addCode(vector<string> &id_List);
};

