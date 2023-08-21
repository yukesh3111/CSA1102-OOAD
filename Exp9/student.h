
#ifndef CENTRAL_MANGEMENT_SYSTEM_H
#define CENTRAL_MANGEMENT_SYSTEM_H

#include <string>

/**
  * class central_mangement_system
  * 
  */

class central_mangement_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  central_mangement_system ();

  /**
   * Empty Destructor
   */
  virtual ~central_mangement_system ();

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
  void verify ()
  {
  }


  /**
   */
  void enroll ()
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

  void store_details;
  void verify_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store_details
   * @param new_var the new value of store_details
   */
  void setStore_details (void new_var)   {
      store_details = new_var;
  }

  /**
   * Get the value of store_details
   * @return the value of store_details
   */
  void getStore_details ()   {
    return store_details;
  }

  /**
   * Set the value of verify_details
   * @param new_var the new value of verify_details
   */
  void setVerify_details (void new_var)   {
      verify_details = new_var;
  }

  /**
   * Get the value of verify_details
   * @return the value of verify_details
   */
  void getVerify_details ()   {
    return verify_details;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_MANGEMENT_SYSTEM_H


#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
  * class student
  * 
  */

class student
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  student ();

  /**
   * Empty Destructor
   */
  virtual ~student ();

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
  void brower ()
  {
  }


  /**
   */
  void register ()
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

  void name_and_address;
  void marks;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name_and_address
   * @param new_var the new value of name_and_address
   */
  void setName_and_address (void new_var)   {
      name_and_address = new_var;
  }

  /**
   * Get the value of name_and_address
   * @return the value of name_and_address
   */
  void getName_and_address ()   {
    return name_and_address;
  }

  /**
   * Set the value of marks
   * @param new_var the new value of marks
   */
  void setMarks (void new_var)   {
      marks = new_var;
  }

  /**
   * Get the value of marks
   * @return the value of marks
   */
  void getMarks ()   {
    return marks;
  }
private:


  void initAttributes () ;

};

#endif // STUDENT_H
