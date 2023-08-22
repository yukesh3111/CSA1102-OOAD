
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


#ifndef SALES_H
#define SALES_H

#include <string>
#include vector



/**
  * class Sales
  * 
  */

class Sales
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Sales ();

  /**
   * Empty Destructor
   */
  virtual ~Sales ();

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
  void addSales ()
  {
  }


  /**
   */
  void editSales ()
  {
  }


  /**
   */
  void deleteSales ()
  {
  }


  /**
   */
  void searchSales ()
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

  void sale_id;
  void sale_customer_id;
  void sale_amount;
  void sale_descryption;
  void sale_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of sale_id
   * @param new_var the new value of sale_id
   */
  void setSale_id (void new_var)   {
      sale_id = new_var;
  }

  /**
   * Get the value of sale_id
   * @return the value of sale_id
   */
  void getSale_id ()   {
    return sale_id;
  }

  /**
   * Set the value of sale_customer_id
   * @param new_var the new value of sale_customer_id
   */
  void setSale_customer_id (void new_var)   {
      sale_customer_id = new_var;
  }

  /**
   * Get the value of sale_customer_id
   * @return the value of sale_customer_id
   */
  void getSale_customer_id ()   {
    return sale_customer_id;
  }

  /**
   * Set the value of sale_amount
   * @param new_var the new value of sale_amount
   */
  void setSale_amount (void new_var)   {
      sale_amount = new_var;
  }

  /**
   * Get the value of sale_amount
   * @return the value of sale_amount
   */
  void getSale_amount ()   {
    return sale_amount;
  }

  /**
   * Set the value of sale_descryption
   * @param new_var the new value of sale_descryption
   */
  void setSale_descryption (void new_var)   {
      sale_descryption = new_var;
  }

  /**
   * Get the value of sale_descryption
   * @return the value of sale_descryption
   */
  void getSale_descryption ()   {
    return sale_descryption;
  }

  /**
   * Set the value of sale_type
   * @param new_var the new value of sale_type
   */
  void setSale_type (void new_var)   {
      sale_type = new_var;
  }

  /**
   * Get the value of sale_type
   * @return the value of sale_type
   */
  void getSale_type ()   {
    return sale_type;
  }
private:


  void initAttributes () ;

};

#endif // SALES_H
