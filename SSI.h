//******************************************************************
// Program #: Homework #2 .h FIle
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



enum Family {TTL ,BiCMOS ,CMOS};
enum Package {SSOP, SOIC, DIP, CFP, LCCC, SO};


class TTL_board
{
  private:
    string Part_number;
    string Part_name;
    string Description;
    Family Fam;
    Package Pack;
    float VCC[4];
    float VIH;
    float VIL;

    
  public:
    // Default Constructors
    TTL_board();

    // Default Destructor
    ~TTL_board();  
    

    //Getters
    //Sets a value for number 
    void Set_Number(const string&);
     //Sets a value for string 
    void Set_Name(const string&);
     //Sets a value 
    void Set_Des(const string&);
     //Sets a value 
    void Set_Fam(Family);
     //Sets a value 
    void Set_Pack(Package);
     //Sets a value 
    void Set_VCC(float *V_CC);
     //Sets a value 
    void Set_VIL(float V_IH);
     //Sets a value 
    void Set_VIH(float V_IL);

    //Setters
    //Returns Number
    string Get_Number();
    // Returns Name
    string Get_Name();
    //Returns Description
    string Get_Des();
    // Returns Family
    Family Get_Fam();
    //Returns Package
    Package Get_Pack();
    // Returns VCC
    float *Get_VCC();
    // Returns VIL
    float Get_VIL();
    // Returns VIH
    float Get_VIH();
    //prints vals
    void print();
    //prints vals
    void load(ifstream&);
    //prints vals
    void unload(ofstream&);


    
};


  
