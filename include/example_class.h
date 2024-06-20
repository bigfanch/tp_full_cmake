#pragma once

/** @file 
 */

/**
 * @class
 *
 */
class ExampleClass
{
   private:
     int val;

   public:
     ExampleClass(int val);
 
     ~ExampleClass()
     {}
 
     int getVal();
     void setVal(int newVal);
};
