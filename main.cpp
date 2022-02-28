//******************************************************************
// Program #: Homework #2 main FIle
//
// Programmer: Michael Lindsay
// Due Date: NA
//
// EGRE 347, Spring 2022       Instructor: Robert Klenke
//
// Pledge: I have neither given nor received unauthorized aid on this program.
//
// Description: All of the needed decreactions for the file
//
// Input: None in this file
//
// Output: none
//
//******************************************************************
using namespace std;

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#include "SSI.h"


/*

Implement  a  main()  program  that  tests  your  implementation  of  the  class.  Your  test  
program should create an array of at least 4 or 5 objects of the class. Several objects 
should have their values filled in using your “setter” methods and some of the values 
should be retrieved and printed out using some of your “getter” methods. Note that you 
are  NOT  allowed  to  use  any  of  the  standard  C++  containers  (e.g.,  <vector>, 
<array>) in this assignment. 
*/


/*
Two of your objects should have their values set using the “load” method. You have 
been  provided  with  a  valid  input  file  named  “infile.part.”  Your  test  program  should  
open that file as an ifstream and call the “load” method twice to read the information 
into two objects of your class.
*/

/*
Your test program should loop through the array of objects and call the “print” method 
to print all them on the screen. 
*/


int main(void){
	

	ifstream infile;
    infile.open ("infile.part");
    ofstream outfile("outfile.part");
    TTL_board HW2[5];
    float array_hw2_2[5] = {1.2,2.34,3.56,4.67,5.78};
    float array_hw2_3[5] = {4,4.2,2.9,4,3};
    float array_hw2_4[5] = {2,6.3,1.82,5.9,4};
    int temp1,temp2;

    

    //setting 0 and 1

    HW2[0].load(infile);
	HW2[1].load(infile);

    HW2[0].print();
    HW2[1].print();

    //Setting and Getting 2
    cout << "--------------------------------------------------" <<endl<<endl;
    HW2[2].Set_Number("SN54HC04J");
    HW2[2].Set_Name("Quadruple 2-input Inverter gate");
    HW2[2].Set_Des("The SN54HC04J device Inverters Military 6-ch, 2-V to 6-V inverters 14-CDIP -55 to 125");
    HW2[2].Set_Fam(TTL);
    HW2[2].Set_Pack(SOIC);
    HW2[2].Set_VCC(array_hw2_2);
    HW2[2].Set_VIL(1);
    HW2[2].Set_VIH(3.2);
    //print statements 
    cout<<HW2[2].Get_Number()<<" ";
    cout<<HW2[2].Get_Name()<<endl<<endl;
    cout<<HW2[2].Get_Des()<<endl;

    temp1=HW2[2].Get_Fam();
    switch(temp1) {
          case 0:
            cout << "TTL";
            break;
          case 1:
            cout << "BiCMOS";
            break;
          case 2:
            cout << "CMOS";
            break;
      }

    temp2=HW2[2].Get_Pack();

    cout << " ";
      switch(temp2) {
          case 0:
            cout << "SSOP";
            break;
          case 1:
            cout << "SOIC";
            break;
          case 2:
            cout << "DIP";
            break;
          case 3:
            cout << "CFP";
            break;
          case 4:
            cout << "LCCC";
            break;
          case 5:
            cout << "SO";
            break;
      }
      cout<<endl;
    const float* toShow1 = HW2[2].Get_VCC();
    cout<<"VCC: ";
     for (int i= 0; i < 5; i++) {
        if (toShow1[i]!=0)
        {
            cout << toShow1[i] << "V, ";
        }
        
    }
    cout<<endl<<"Vil = "<<HW2[2].Get_VIL();
    cout<<" Vih = "<<HW2[2].Get_VIH()<<endl;






    //Setting and Getting 3
    cout << "--------------------------------------------------" <<endl<<endl;
    HW2[3].Set_Number("SN74HC04NS");
    HW2[3].Set_Name("Inverter IC 6 Channel");
    HW2[3].Set_Des("The SN74HC04NS IC INVERTER 6CH 6-INP 14DIP");
    HW2[3].Set_Fam(TTL);
    HW2[3].Set_Pack(SOIC);
    HW2[3].Set_VCC(array_hw2_3);
    HW2[3].Set_VIL(1);
    HW2[3].Set_VIH(3.2);
    //print statements
    cout<<HW2[3].Get_Number()<<" ";
    cout<<HW2[3].Get_Name()<<endl<<endl;
    cout<<HW2[3].Get_Des()<<endl<<endl;

    temp1=HW2[3].Get_Fam();
    switch(temp1) {
          case 0:
            cout << "TTL";
            break;
          case 1:
            cout << "BiCMOS";
            break;
          case 2:
            cout << "CMOS";
            break;
      }

    temp2=HW2[3].Get_Pack();

    cout << " ";
      switch(temp2) {
          case 0:
            cout << "SSOP";
            break;
          case 1:
            cout << "SOIC";
            break;
          case 2:
            cout << "DIP";
            break;
          case 3:
            cout << "CFP";
            break;
          case 4:
            cout << "LCCC";
            break;
          case 5:
            cout << "SO";
            break;
      }
      cout<<endl;


    const float* toShow2 = HW2[3].Get_VCC();
     for (int i= 0; i < 5; i++) {
        if (toShow2[i]!=0)
        {
            cout << toShow2[i] << "V, ";
        }
        
    }

    cout<<endl<<"Vil = "<<HW2[3].Get_VIL();
    cout<<" Vih = "<<HW2[3].Get_VIH()<<endl;

    

    //Setting and Geting 4
    cout << "--------------------------------------------------" <<endl<<endl;
    HW2[4].Set_Number("SN74HC04PW");
    HW2[4].Set_Name("IC INVERTER 6CH 6-INP 14TSSOP");
    HW2[4].Set_Des("The SN74HC04PW IC INVERTER 6CH 6-INP 14TSSOP");
    HW2[4].Set_Fam(TTL);
    HW2[4].Set_Pack(SOIC);
    HW2[4].Set_VCC(array_hw2_4);
    HW2[4].Set_VIL(1);
    HW2[4].Set_VIH(3.2);
    //print statements
    cout<<HW2[4].Get_Number()<< " ";
    cout<<HW2[4].Get_Name()<<endl<<endl;
    cout<<HW2[4].Get_Des()<<endl<<endl;

    temp1=HW2[4].Get_Fam();
    switch(temp1) {
          case 0:
            cout << "TTL";
            break;
          case 1:
            cout << "BiCMOS";
            break;
          case 2:
            cout << "CMOS";
            break;
      }

    temp2=HW2[4].Get_Pack();

    cout << " ";
      switch(temp2) {
          case 0:
            cout << "SSOP";
            break;
          case 1:
            cout << "SOIC";
            break;
          case 2:
            cout << "DIP";
            break;
          case 3:
            cout << "CFP";
            break;
          case 4:
            cout << "LCCC";
            break;
          case 5:
            cout << "SO";
            break;
      }
      cout<<endl;
    const float* toShow3 = HW2[4].Get_VCC();
     for (int i= 0; i < 5; i++) {
        if (toShow3[i]!=0)
        {
            cout << toShow3[i] << "V, ";
        }
    }
    cout<<endl<<"Vil = "<<HW2[4].Get_VIL();
    cout<<" Vih = "<<HW2[4].Get_VIH()<<endl;
    


    //out to file
    HW2[0].unload(outfile);
    HW2[1].unload(outfile);
    HW2[2].unload(outfile);
    HW2[3].unload(outfile);
    HW2[4].unload(outfile);
    

}


