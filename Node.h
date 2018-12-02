#ifndef NODE_H
#define NODE_H
#include <string>
using std::string;
#include <vector>
using std::vector;

class node
{
	string ID;		// This will correspond to vector index
	string parentID;
	string rawEvent;		// this is what we take in from the user
	string RHASH;
	string LHASH;
	vector<string> RHISTH;
	vector<string> LHISTH;
	
	void setRawEvent(string event);
	void insertNode(string rawevent);
};

#endif
