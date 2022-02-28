//******************************************************************
// Program #: Homework SSI FIle
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



    

    //default constructure
    TTL_board::TTL_board(void){
        this->Part_number = "NONE";
        this->Part_name = "NONE";
        this->Description = "NONE";
        VCC[0]=(0);
        VCC[1]=(0);
        VCC[2]=(0);
        VCC[3]=(0);
        VIH=(0);
        VIL=(0);

    }

    TTL_board::~TTL_board(void){
        //cout << "Deleting Part # " << Part_number << endl;
    }



    void TTL_board::Set_Number(const string& Part_num){
      this->Part_number = Part_num;
    }

     //Sets a value 
    void TTL_board::Set_Name(const string& Part_n){
      this->Part_name = Part_n;
    }

     //Sets a value 
    void TTL_board::Set_Des(const string& Des){
       this->Description=Des;

    }

     //Sets a value 
    void TTL_board::Set_Fam(Family Fam){
        this->Fam = Fam;
    }

     //Sets a value 
    void TTL_board::Set_Pack(Package Pack){
        this->Pack=Pack;
    }

     //Sets a value 
    void TTL_board::Set_VCC(float* V_CC){
        this->VCC[0] = V_CC[0];
        this->VCC[1] = V_CC[1];
        this->VCC[2] = V_CC[2];
        this->VCC[3] = V_CC[3];
    }

     //Sets a value 
    void TTL_board::Set_VIL(float V_IH){
        this->VIH=V_IH;
    }

     //Sets a value 
    void TTL_board::Set_VIH(float V_IL){
        this->VIL=V_IL;
    }









    //Setters
    //Returns Number
    string TTL_board::Get_Number(){
        return this->Part_number;

    }

    // Returns Name
    string TTL_board::Get_Name(){
        return this->Part_name;

    }

    //Returns Description
    string TTL_board::Get_Des(){
        return this->Description;

    }

    // Returns Family
    Family TTL_board::Get_Fam(){
        //return
        return this->Fam;
    }

    //Returns Package
    Package TTL_board::Get_Pack(){
        //return
        return this->Pack;
    }

    // Returns VCC
    float *TTL_board::Get_VCC(){
        return this->VCC;
       
    }

    // Returns VIL
    float TTL_board::Get_VIL(){
        return this->VIL;
    }

    // Returns VIH
    float TTL_board::Get_VIH(){
        return this->VIH;

    }

    void TTL_board::print(void)
    {
      cout << "--------------------------------------------------" <<endl<<endl;
      cout << this->Part_number << " " << this->Part_name << endl << endl;
      cout << this->Description << endl << endl; 
      switch(this->Fam) {
          case TTL:
            cout << "TTL";
            break;
          case BiCMOS:
            cout << "BiCMOS";
            break;
          case CMOS:
            cout << "CMOS";
            break;
      }
      cout << " ";
      switch(this->Pack) {
          case SSOP:
            cout << "SSOP";
            break;
          case SOIC:
            cout << "SOIC";
            break;
          case DIP:
            cout << "DIP";
            break;
          case CFP:
            cout << "CFP";
            break;
          case LCCC:
            cout << "LCCC";
            break;
          case SO:
            cout << "SO";
            break;
      }
      cout << endl;
       cout << "VCC: ";
      if(VCC[0]!= 0)
        cout<< fixed << showpoint << setprecision(1)<< VCC[0] << "V";

      if(VCC[1]!= 0)
        cout<< fixed << showpoint << setprecision(1)<< ", "<< (float)VCC[1]<< "V";

      if(VCC[2]!= 0)
        cout<< fixed << showpoint << setprecision(1) << ", "<< (float)VCC[2]<< "V";

      if(VCC[3]!= 0)
        cout<< fixed << showpoint << setprecision(1) <<", "<< (float)VCC[3]<< "V";
      cout << endl;


    cout <<fixed << showpoint << setprecision(1) << "Vil = " << this->VIL << "V" << " Vih = " << this->VIH << "V" << endl;



     
    }


    void TTL_board::load(ifstream& infile){
        int temp1 = 1092875213,temp2 = 1094857;


        getline(infile,this->Part_number);
        getline(infile,this->Part_name);
        getline(infile,this->Description);
            infile >> temp1;
        this->Fam = Family(temp1);
        infile >> temp2;
        this->Pack = Package(temp2);
        infile >> this->VCC[0];
        infile >> this->VCC[1];
        infile >> this->VCC[2];
        infile >> this->VCC[3];
        infile >> this->VIH;
        infile >> this->VIL;
        infile.ignore();


    }

    void TTL_board::unload(ofstream& ofile)
{
    ofile << fixed << showpoint << setprecision(1) << Part_number << endl;
    ofile << fixed << showpoint << setprecision(1) << Part_name <<endl;
    ofile << fixed << showpoint << setprecision(1) << Description << endl;
    ofile << fixed << showpoint << setprecision(1) << Fam <<endl;
    ofile << fixed << showpoint << setprecision(1) <<Pack << endl;
    ofile << fixed << showpoint << setprecision(1) << VCC[0] << " " << VCC[1] << " " << VCC[2] << " " << VCC[3] << endl;
    ofile << VIH << endl;
    ofile << VIL << endl;

}


 



