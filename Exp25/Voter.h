
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>

/**
  * class Administrator
  * 
  */

class Administrator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Administrator ();

  /**
   * Empty Destructor
   */
  virtual ~Administrator ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string getVote ()
  {
  }


  /**
   */
  void Login ()
  {
  }


  /**
   */
  void ChangeParty ()
  {
  }


  /**
   */
  void EditParty ()
  {
  }


  /**
   * @return string
   */
  string setParty ()
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

  string UserName;
  string Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // ADMINISTRATOR_H


#ifndef VOTER_H
#define VOTER_H

#include <string>

/**
  * class Voter
  * 
  */

class Voter
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Voter ();

  /**
   * Empty Destructor
   */
  virtual ~Voter ();

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
  void Login ()
  {
  }


  /**
   */
  void Vote ()
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

  void RegstrationNo;
  void SmsPassword;
  void GridPasword;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of RegstrationNo
   * @param new_var the new value of RegstrationNo
   */
  void setRegstrationNo (void new_var)   {
      RegstrationNo = new_var;
  }

  /**
   * Get the value of RegstrationNo
   * @return the value of RegstrationNo
   */
  void getRegstrationNo ()   {
    return RegstrationNo;
  }

  /**
   * Set the value of SmsPassword
   * @param new_var the new value of SmsPassword
   */
  void setSmsPassword (void new_var)   {
      SmsPassword = new_var;
  }

  /**
   * Get the value of SmsPassword
   * @return the value of SmsPassword
   */
  void getSmsPassword ()   {
    return SmsPassword;
  }

  /**
   * Set the value of GridPasword
   * @param new_var the new value of GridPasword
   */
  void setGridPasword (void new_var)   {
      GridPasword = new_var;
  }

  /**
   * Get the value of GridPasword
   * @return the value of GridPasword
   */
  void getGridPasword ()   {
    return GridPasword;
  }
private:


  void initAttributes () ;

};

#endif // VOTER_H
