#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

int main(void)
{
	Bar *pBar;
    Foo *pFoo;
	pBar = new Bar();
	pFoo = new Foo();
	pFoo->hoge();
	pBar->func2();
	pFoo->fuga(pBar);
	pFoo->hoge();
	return 0;
}

