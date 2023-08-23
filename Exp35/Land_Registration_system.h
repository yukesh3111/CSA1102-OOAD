
#ifndef DATE_H
#define DATE_H

#include <string>

/**
  * class date
  * 
  */

class date
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  date ();

  /**
   * Empty Destructor
   */
  virtual ~date ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // DATE_H


#ifndef LAND_REGISTRATION_SYSTEM_H
#define LAND_REGISTRATION_SYSTEM_H

#include <string>

/**
  * class Land_Registration_system
  * 
  */

class Land_Registration_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Land_Registration_system ();

  /**
   * Empty Destructor
   */
  virtual ~Land_Registration_system ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void Govt_officer;
  void User;
  void Land_Detail;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Govt_officer
   * @param new_var the new value of Govt_officer
   */
  void setGovt_officer (void new_var)   {
      Govt_officer = new_var;
  }

  /**
   * Get the value of Govt_officer
   * @return the value of Govt_officer
   */
  void getGovt_officer ()   {
    return Govt_officer;
  }

  /**
   * Set the value of User
   * @param new_var the new value of User
   */
  void setUser (void new_var)   {
      User = new_var;
  }

  /**
   * Get the value of User
   * @return the value of User
   */
  void getUser ()   {
    return User;
  }

  /**
   * Set the value of Land_Detail
   * @param new_var the new value of Land_Detail
   */
  void setLand_Detail (void new_var)   {
      Land_Detail = new_var;
  }

  /**
   * Get the value of Land_Detail
   * @return the value of Land_Detail
   */
  void getLand_Detail ()   {
    return Land_Detail;
  }
private:


  void initAttributes () ;

};

#endif // LAND_REGISTRATION_SYSTEM_H
