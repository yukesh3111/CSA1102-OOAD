
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>

/**
  * class Aircraft
  * 
  */

class Aircraft
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Aircraft ();

  /**
   * Empty Destructor
   */
  virtual ~Aircraft ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void Get_Reg_NO ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  int RegistrationNumber;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of RegistrationNumber
   * @param new_var the new value of RegistrationNumber
   */
  void setRegistrationNumber (int new_var)   {
      RegistrationNumber = new_var;
  }

  /**
   * Get the value of RegistrationNumber
   * @return the value of RegistrationNumber
   */
  int getRegistrationNumber ()   {
    return RegistrationNumber;
  }
private:


  void initAttributes () ;

};

#endif // AIRCRAFT_H


#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

/**
  * class Flight
  * 
  */

class Flight
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Flight ();

  /**
   * Empty Destructor
   */
  virtual ~Flight ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void get_details ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  date actualDepartTime;
  void actualDuration;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of actualDepartTime
   * @param new_var the new value of actualDepartTime
   */
  void setActualDepartTime (date new_var)   {
      actualDepartTime = new_var;
  }

  /**
   * Get the value of actualDepartTime
   * @return the value of actualDepartTime
   */
  date getActualDepartTime ()   {
    return actualDepartTime;
  }

  /**
   * Set the value of actualDuration
   * @param new_var the new value of actualDuration
   */
  void setActualDuration (void new_var)   {
      actualDuration = new_var;
  }

  /**
   * Get the value of actualDuration
   * @return the value of actualDuration
   */
  void getActualDuration ()   {
    return actualDuration;
  }
private:


  void initAttributes () ;

};

#endif // FLIGHT_H
