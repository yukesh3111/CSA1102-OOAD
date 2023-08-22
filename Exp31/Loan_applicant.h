
#ifndef AGRICLUTUREL_LOAN_MANAGEMENT_SYSTEM_H
#define AGRICLUTUREL_LOAN_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class Agricluturel_Loan_Management_System
  * 
  */

class Agricluturel_Loan_Management_System
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Agricluturel_Loan_Management_System ();

  /**
   * Empty Destructor
   */
  virtual ~Agricluturel_Loan_Management_System ();

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
  void Process_Agri_lloan_Applicant ()
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

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // AGRICLUTUREL_LOAN_MANAGEMENT_SYSTEM_H


#ifndef LOAN_APPLICANT_H
#define LOAN_APPLICANT_H

#include <string>

/**
  * class Loan_applicant
  * 
  */

class Loan_applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Loan_applicant ();

  /**
   * Empty Destructor
   */
  virtual ~Loan_applicant ();

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

  void Amount;
  void Description;
  void Name;
  void Payment;
  void Tax_ID;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Amount
   * @param new_var the new value of Amount
   */
  void setAmount (void new_var)   {
      Amount = new_var;
  }

  /**
   * Get the value of Amount
   * @return the value of Amount
   */
  void getAmount ()   {
    return Amount;
  }

  /**
   * Set the value of Description
   * @param new_var the new value of Description
   */
  void setDescription (void new_var)   {
      Description = new_var;
  }

  /**
   * Get the value of Description
   * @return the value of Description
   */
  void getDescription ()   {
    return Description;
  }

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
   * Set the value of Payment
   * @param new_var the new value of Payment
   */
  void setPayment (void new_var)   {
      Payment = new_var;
  }

  /**
   * Get the value of Payment
   * @return the value of Payment
   */
  void getPayment ()   {
    return Payment;
  }

  /**
   * Set the value of Tax_ID
   * @param new_var the new value of Tax_ID
   */
  void setTax_ID (void new_var)   {
      Tax_ID = new_var;
  }

  /**
   * Get the value of Tax_ID
   * @return the value of Tax_ID
   */
  void getTax_ID ()   {
    return Tax_ID;
  }
private:


  void initAttributes () ;

};

#endif // LOAN_APPLICANT_H
