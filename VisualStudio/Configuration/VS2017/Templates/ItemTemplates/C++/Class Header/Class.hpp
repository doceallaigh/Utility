#pragma once

#pragma region Library Includes
#pragma endregion

#pragma region Local Includes
#pragma endregion

#pragma region Forward Declarations
#pragma endregion

#pragma region Type Definitions
#pragma endregion

/*! \brief <Brief description goes here>
 * 
 * <Detailed description goes here>
 * */
class $safeitemname$ 
{
#pragma region Class Assertions
#pragma endregion

public:
#pragma region Operators
    //! \cond \brief Copy assignment operator \endcond
    // $safeitemname$& operator= (const $safeitemname$ &original);

    //! \cond \brief Move assignment operator \endcond
    // $safeitemname$& operator= ($safeitemname$ &&original) noexcept;
#pragma endregion

#pragma region Custom Constructors
    /*! \cond \brief <Brief description goes here> \endcond
    *
    * \cond \param[in] <Parameter description goes here> \endcond
    * */
    // $safeitemname$ (T ... args);
#pragma endregion

#pragma region Standard Constructors & Destructor
    //! \brief Default Constructor
    $safeitemname$(void) = default;

    //! \brief Copy Constructor
    $safeitemname$(const $safeitemname$ &original) = default;

    //! \brief Move Constructor
    // $safeitemname$(const $safeitemname$ &&original) noexcept = default;

    //! \brief Destructor
    virtual ~$safeitemname$(void) noexcept = default;
#pragma endregion

private:
#pragma region Private Constructors
    //! \cond \brief Private Default Constructor \endcond
    // $safeitemname$(void) = default;
#pragma endregion

public:
#pragma region Public Methods
#pragma endregion

protected:
#pragma region Protected Methods
#pragma endregion

private:
#pragma region Private Methods
#pragma endregion

public:
#pragma region Public Fields
#pragma endregion

protected:
#pragma region Protected Fields
#pragma endregion

private:
#pragma region Private Fields
#pragma endregion
};