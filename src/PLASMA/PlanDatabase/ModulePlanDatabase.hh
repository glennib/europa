
#ifndef H_ModulePlanDatabase
#define H_ModulePlanDatabase

#include "Module.hh"

namespace EUROPA {
  class ModulePlanDatabase : public Module
  {
    public:
      ModulePlanDatabase();
      virtual ~ModulePlanDatabase();

      /**
       * @brief Initialize all default elements of the module 
       */
	  virtual void initialize();
	  /**
	   * @brief Uninitialize all default elements of the module 
	   */
	  virtual void uninitialize();   

	  virtual void initialize(EngineId engine);   // initialization of a particular engine instance

	  virtual void uninitialize(EngineId engine); // cleanup of a particular engine instance	  
  };

  typedef Id<ModulePlanDatabase> ModulePlanDatabaseId;  
}  


#endif /* #ifndef H_ModulePlanDatabase */
