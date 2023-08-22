
#ifndef CUSTOMER_JEWEL_LOAN_PROCESS_H
#define CUSTOMER_JEWEL_LOAN_PROCESS_H

#include <string>

/**
  * class Customer_jewel_loan_process
  * 
  */

class Customer_jewel_loan_process
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer_jewel_loan_process ();

  /**
   * Empty Destructor
   */
  virtual ~Customer_jewel_loan_process ();

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
  void Process_jewel_loan_applicant ()
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

#endif // CUSTOMER_JEWEL_LOAN_PROCESS_H


#ifndef LOAN_OFFICER_H
#define LOAN_OFFICER_H

#include <string>

/**
  * class Loan_officer
  * 
  */

class Loan_officer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Loan_officer ();

  /**
   * Empty Destructor
   */
  virtual ~Loan_officer ();

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

  void Payment;
  void Rate;
  void Terms;
  void TypeDesc;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of Rate
   * @param new_var the new value of Rate
   */
  void setRate (void new_var)   {
      Rate = new_var;
  }

  /**
   * Get the value of Rate
   * @return the value of Rate
   */
  void getRate ()   {
    return Rate;
  }

  /**
   * Set the value of Terms
   * @param new_var the new value of Terms
   */
  void setTerms (void new_var)   {
      Terms = new_var;
  }

  /**
   * Get the value of Terms
   * @return the value of Terms
   */
  void getTerms ()   {
    return Terms;
  }

  /**
   * Set the value of TypeDesc
   * @param new_var the new value of TypeDesc
   */
  void setTypeDesc (void new_var)   {
      TypeDesc = new_var;
  }

  /**
   * Get the value of TypeDesc
   * @return the value of TypeDesc
   */
  void getTypeDesc ()   {
    return TypeDesc;
  }
private:


  void initAttributes () ;

};

#endif // LOAN_OFFICER_H
