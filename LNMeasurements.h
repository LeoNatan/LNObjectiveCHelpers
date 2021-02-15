//
//  LNMeasurements.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 1/23/19.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#ifndef LNMeasurements_h
#define LNMeasurements_h

#define LNStartTimeMeasurment() CFTimeInterval ___startTime = CACurrentMediaTime();

#define LNEndTimeMeasurment(action) CFTimeInterval ___elapsedTime = CACurrentMediaTime() - ___startTime; \
ln_log_info(@"%@ took %f seconds to " action, self.class, ___elapsedTime);

#endif /* LNMeasurements_h */
