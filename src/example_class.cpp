#include "example_class.h"

/** @file 
 */

ExampleClass::ExampleClass(int val) :
	val(val)
{
}

int ExampleClass::getVal()
{
    return val;
}

void ExampleClass::setVal(int newVal)
{
    val = newVal;
}
