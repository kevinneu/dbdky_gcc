#ifndef __MEASUREPOINT_H_
#define __MEASUREPOINT_H_

#include <string>
#include <list>

#include "param.h"

using namespace std;

namespace dbdky
{
namespace gcc
{
class MeasurePoint
{
private:
	string deviceid_;
	string IEDName_;
	string id_;
	string checktime_;
	map<string, Param> paramList_;
};
}
}


#endif    //__MEASUREPOINT_H_