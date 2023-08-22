
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


#ifndef USER_H
#define USER_H

#include <string>

/**
  * class User
  * 
  */

class User
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User ();

  /**
   * Empty Destructor
   */
  virtual ~User ();

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
  void Submit ()
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

  void FirstName;
  void MiddleName;
  // 	
  void SmsPassword;
  void GridPassword;
  void DateOfBirth;
  void MartialStatus;
  void Address;
  void Nationality;
  void Religion;
  void RegNum;
  void PlaceOfBirth;
  void StateOfOrigin;
  void Profession;
  void Picture;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of FirstName
   * @param new_var the new value of FirstName
   */
  void setFirstName (void new_var)   {
      FirstName = new_var;
  }

  /**
   * Get the value of FirstName
   * @return the value of FirstName
   */
  void getFirstName ()   {
    return FirstName;
  }

  /**
   * Set the value of MiddleName
   * @param new_var the new value of MiddleName
   */
  void setMiddleName (void new_var)   {
      MiddleName = new_var;
  }

  /**
   * Get the value of MiddleName
   * @return the value of MiddleName
   */
  void getMiddleName ()   {
    return MiddleName;
  }

  /**
   * Set the value of SmsPassword
   * 
   * @param new_var the new value of SmsPassword
   */
  void setSmsPassword (void new_var)   {
      SmsPassword = new_var;
  }

  /**
   * Get the value of SmsPassword
   * 
   * @return the value of SmsPassword
   */
  void getSmsPassword ()   {
    return SmsPassword;
  }

  /**
   * Set the value of GridPassword
   * @param new_var the new value of GridPassword
   */
  void setGridPassword (void new_var)   {
      GridPassword = new_var;
  }

  /**
   * Get the value of GridPassword
   * @return the value of GridPassword
   */
  void getGridPassword ()   {
    return GridPassword;
  }

  /**
   * Set the value of DateOfBirth
   * @param new_var the new value of DateOfBirth
   */
  void setDateOfBirth (void new_var)   {
      DateOfBirth = new_var;
  }

  /**
   * Get the value of DateOfBirth
   * @return the value of DateOfBirth
   */
  void getDateOfBirth ()   {
    return DateOfBirth;
  }

  /**
   * Set the value of MartialStatus
   * @param new_var the new value of MartialStatus
   */
  void setMartialStatus (void new_var)   {
      MartialStatus = new_var;
  }

  /**
   * Get the value of MartialStatus
   * @return the value of MartialStatus
   */
  void getMartialStatus ()   {
    return MartialStatus;
  }

  /**
   * Set the value of Address
   * @param new_var the new value of Address
   */
  void setAddress (void new_var)   {
      Address = new_var;
  }

  /**
   * Get the value of Address
   * @return the value of Address
   */
  void getAddress ()   {
    return Address;
  }

  /**
   * Set the value of Nationality
   * @param new_var the new value of Nationality
   */
  void setNationality (void new_var)   {
      Nationality = new_var;
  }

  /**
   * Get the value of Nationality
   * @return the value of Nationality
   */
  void getNationality ()   {
    return Nationality;
  }

  /**
   * Set the value of Religion
   * @param new_var the new value of Religion
   */
  void setReligion (void new_var)   {
      Religion = new_var;
  }

  /**
   * Get the value of Religion
   * @return the value of Religion
   */
  void getReligion ()   {
    return Religion;
  }

  /**
   * Set the value of RegNum
   * @param new_var the new value of RegNum
   */
  void setRegNum (void new_var)   {
      RegNum = new_var;
  }

  /**
   * Get the value of RegNum
   * @return the value of RegNum
   */
  void getRegNum ()   {
    return RegNum;
  }

  /**
   * Set the value of PlaceOfBirth
   * @param new_var the new value of PlaceOfBirth
   */
  void setPlaceOfBirth (void new_var)   {
      PlaceOfBirth = new_var;
  }

  /**
   * Get the value of PlaceOfBirth
   * @return the value of PlaceOfBirth
   */
  void getPlaceOfBirth ()   {
    return PlaceOfBirth;
  }

  /**
   * Set the value of StateOfOrigin
   * @param new_var the new value of StateOfOrigin
   */
  void setStateOfOrigin (void new_var)   {
      StateOfOrigin = new_var;
  }

  /**
   * Get the value of StateOfOrigin
   * @return the value of StateOfOrigin
   */
  void getStateOfOrigin ()   {
    return StateOfOrigin;
  }

  /**
   * Set the value of Profession
   * @param new_var the new value of Profession
   */
  void setProfession (void new_var)   {
      Profession = new_var;
  }

  /**
   * Get the value of Profession
   * @return the value of Profession
   */
  void getProfession ()   {
    return Profession;
  }

  /**
   * Set the value of Picture
   * @param new_var the new value of Picture
   */
  void setPicture (void new_var)   {
      Picture = new_var;
  }

  /**
   * Get the value of Picture
   * @return the value of Picture
   */
  void getPicture ()   {
    return Picture;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
