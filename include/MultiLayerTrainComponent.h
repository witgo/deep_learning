#include "TrainComponent.h"

#ifndef _MULTILAYERTRAINCOMPONENT
#define _MULTILAYERTRAINCOMPONENT

class MultiLayerTrainComponent : public IModel {
    public:
        MultiLayerTrainComponent(const char*);
        ~MultiLayerTrainComponent();
        virtual TrainComponent& getLayer(int) = 0;
        virtual int getLayerNumber() = 0;
        virtual bool getLayerToTrain(int){ return true; }
};

#endif
