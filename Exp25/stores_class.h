
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


#ifndef STORES_CLASS_H
#define STORES_CLASS_H

#include <string>
#include vector



/**
  * class stores_class
  * 
  */

class stores_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  stores_class ();

  /**
   * Empty Destructor
   */
  virtual ~stores_class ();

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
  void addStock ()
  {
  }


  /**
   */
  void editStock ()
  {
  }


  /**
   */
  void deleteStock ()
  {
  }


  /**
   */
  void searchStock ()
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

  int store_id;
  string store_items;
  string store_number;
  string store_type;
  string store_description;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store_id
   * @param new_var the new value of store_id
   */
  void setStore_id (int new_var)   {
      store_id = new_var;
  }

  /**
   * Get the value of store_id
   * @return the value of store_id
   */
  int getStore_id ()   {
    return store_id;
  }

  /**
   * Set the value of store_items
   * @param new_var the new value of store_items
   */
  void setStore_items (string new_var)   {
      store_items = new_var;
  }

  /**
   * Get the value of store_items
   * @return the value of store_items
   */
  string getStore_items ()   {
    return store_items;
  }

  /**
   * Set the value of store_number
   * @param new_var the new value of store_number
   */
  void setStore_number (string new_var)   {
      store_number = new_var;
  }

  /**
   * Get the value of store_number
   * @return the value of store_number
   */
  string getStore_number ()   {
    return store_number;
  }

  /**
   * Set the value of store_type
   * @param new_var the new value of store_type
   */
  void setStore_type (string new_var)   {
      store_type = new_var;
  }

  /**
   * Get the value of store_type
   * @return the value of store_type
   */
  string getStore_type ()   {
    return store_type;
  }

  /**
   * Set the value of store_description
   * @param new_var the new value of store_description
   */
  void setStore_description (string new_var)   {
      store_description = new_var;
  }

  /**
   * Get the value of store_description
   * @return the value of store_description
   */
  string getStore_description ()   {
    return store_description;
  }
private:


  void initAttributes () ;

};

#endif // STORES_CLASS_H
