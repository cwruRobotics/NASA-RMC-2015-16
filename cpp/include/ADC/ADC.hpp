#ifndef ADC_HPP_
#define ADC_HPP_

#include <I2C/I2C.hpp>
#include "ADC/LibraryExport.hpp"

namespace Sensors {

/** The ADC class provides access to the robot's ADC boards. */
class ADC {

	/** Get the voltage on the given ADC channel. Must be checked for
	 *  failure.
	 *  @param value the pointer to which the returned voltage is written
	 *  @param index the ADC channel to use 
	 *  @return 0 on success, or a negative value on failure
	 */
	ADC_API int query(float *value, int index);

};

}

#endif // ADC_HPP_
