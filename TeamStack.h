#pragma once
#include "pch.h"
#include <iostream>
#include "Route.h"
#include "Key.h"
#include "Trip.h"
#include <stack>
#include <memory>
#include <vector>
using namespace std;
struct TeamStack {
	stack<int> optionStack;	//стек типов
	stack<int> operationStack;	//стек операций
	stack<Key> keyStack;	//стек ключевых значений
	stack<shared_ptr<Route>> objectStack;	//стек объектов
	vector<Trip> savedList;	//список удаленных рейсов
};
