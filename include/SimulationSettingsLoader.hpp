#include <iostream>
#include <fstream>

class SimulationSettingsLoader
{
  public:
    void load()
    {
      //std::ifstream settingsFile("singleNeuron.ini");
    } 

    int getNeuronCount()
    { 
      return _neuronCount; 
    }

    int getDendriteCount() 
    { 
      return _dendriteCount; 
    }

    int getSomaCount()
    { 
      return _somaCount; 
    }

  private:
    int _neuronCount = 0;
    int _dendriteCount = 0;
    int _somaCount = 0;    
};