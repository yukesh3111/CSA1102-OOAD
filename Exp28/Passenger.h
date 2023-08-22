
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


#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

/**
  * class Passenger
  * 
  */

class Passenger
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Passenger ();

  /**
   * Empty Destructor
   */
  virtual ~Passenger ();

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
  void Search_flight ()
  {
  }


  /**
   */
  void Book_tickets ()
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

  void Name;
  void Email;
  void Gender;
  void Age;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of Email
   * @param new_var the new value of Email
   */
  void setEmail (void new_var)   {
      Email = new_var;
  }

  /**
   * Get the value of Email
   * @return the value of Email
   */
  void getEmail ()   {
    return Email;
  }

  /**
   * Set the value of Gender
   * @param new_var the new value of Gender
   */
  void setGender (void new_var)   {
      Gender = new_var;
  }

  /**
   * Get the value of Gender
   * @return the value of Gender
   */
  void getGender ()   {
    return Gender;
  }

  /**
   * Set the value of Age
   * @param new_var the new value of Age
   */
  void setAge (void new_var)   {
      Age = new_var;
  }

  /**
   * Get the value of Age
   * @return the value of Age
   */
  void getAge ()   {
    return Age;
  }
private:


  void initAttributes () ;

};

#endif // PASSENGER_H
