// EnergyPlus, Copyright (c) 1996-2019, The Board of Trustees of the University of Illinois,
// The Regents of the University of California, through Lawrence Berkeley National Laboratory
// (subject to receipt of any required approvals from the U.S. Dept. of Energy), Oak Ridge
// National Laboratory, managed by UT-Battelle, Alliance for Sustainable Energy, LLC, and other
// contributors. All rights reserved.
//
// NOTICE: This Software was developed under funding from the U.S. Department of Energy and the
// U.S. Government consequently retains certain rights. As such, the U.S. Government has been
// granted for itself and others acting on its behalf a paid-up, nonexclusive, irrevocable,
// worldwide license in the Software to reproduce, distribute copies to the public, prepare
// derivative works, and perform publicly and display publicly, and to permit others to do so.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted
// provided that the following conditions are met:
//
// (1) Redistributions of source code must retain the above copyright notice, this list of
//     conditions and the following disclaimer.
//
// (2) Redistributions in binary form must reproduce the above copyright notice, this list of
//     conditions and the following disclaimer in the documentation and/or other materials
//     provided with the distribution.
//
// (3) Neither the name of the University of California, Lawrence Berkeley National Laboratory,
//     the University of Illinois, U.S. Dept. of Energy nor the names of its contributors may be
//     used to endorse or promote products derived from this software without specific prior
//     written permission.
//
// (4) Use of EnergyPlus(TM) Name. If Licensee (i) distributes the software in stand-alone form
//     without changes from the version obtained under this License, or (ii) Licensee makes a
//     reference solely to the software portion of its product, Licensee must refer to the
//     software as "EnergyPlus version X" software, where "X" is the version number Licensee
//     obtained under this License and may not use a different name for the software. Except as
//     specifically required in this Section (4), Licensee shall not use in a company name, a
//     product name, in advertising, publicity, or other promotional activities any name, trade
//     name, trademark, logo, or other designation of "EnergyPlus", "E+", "e+" or confusingly
//     similar designation, without the U.S. Department of Energy's prior written consent.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef DataGlobals_hh_INCLUDED
#define DataGlobals_hh_INCLUDED

// C++ Headers
#include <iosfwd>
#include <string>

// EnergyPlus Headers
#include <EnergyPlus/EnergyPlus.hh>

namespace EnergyPlus {

namespace DataGlobals {

    // Data
    // -only module should be available to other modules and routines.
    // Thus, all variables in this module must be PUBLIC.

    extern bool runReadVars;
    extern bool DDOnlySimulation;
    extern bool AnnualSimulation;
    extern bool outputEpJSONConversion;
    extern bool isEpJSON;
    extern bool isCBOR;
    extern bool isMsgPack;
    extern bool preserveIDFOrder;

    // MODULE PARAMETER DEFINITIONS:
    int const BeginDay(1);
    int const DuringDay(2);
    int const EndDay(3);
    int const EndZoneSizingCalc(4);
    int const EndSysSizingCalc(5);

    // Parameters for KindOfSim
    int const ksDesignDay(1);
    int const ksRunPeriodDesign(2);
    int const ksRunPeriodWeather(3);
    int const ksHVACSizeDesignDay(4);       // a regular design day run during HVAC Sizing Simulation
    int const ksHVACSizeRunPeriodDesign(5); // a weather period design day run during HVAC Sizing Simulation
    int const ksReadAllWeatherData(6);      // a weather period for reading all weather data prior to the simulation

    Real64 const MaxEXPArg(709.78);       // maximum exponent in EXP() function
    Real64 const Pi(3.14159265358979324); // Pi 3.1415926535897932384626435
    Real64 const PiOvr2(Pi / 2.0);        // Pi/2
    Real64 const TwoPi(2.0 * Pi);         // 2*Pi 6.2831853071795864769252868
    Real64 const GravityConstant(9.807);
    Real64 const DegToRadians(Pi / 180.0);           // Conversion for Degrees to Radians
    Real64 const RadToDeg(180.0 / Pi);               // Conversion for Radians to Degrees
    Real64 const SecInHour(3600.0);                  // Conversion for hours to seconds
    Real64 const HoursInDay(24.0);                   // Number of Hours in Day
    Real64 const SecsInDay(SecInHour* HoursInDay);   // Number of seconds in Day
    Real64 const BigNumber(HUGE_(1.0));              // Max Number real used for initializations
    Real64 const rTinyValue(EPSILON(1.0));           // Tiny value to replace use of TINY(x)
    std::string::size_type const MaxNameLength(100); // Maximum Name Length in Characters -- should be the same
    // as MaxAlphaArgLength in InputProcessor module

    Real64 const KelvinConv(273.15);       // Conversion factor for C to K and K to C
    Real64 const InitConvTemp(5.05);       // [deg C], standard init vol to mass flow conversion temp
    Real64 const AutoCalculate(-99999.0);  // automatically calculate some fields.
    Real64 const CWInitConvTemp(5.05);     // [deg C], standard init chilled water vol to mass flow conversion temp
    Real64 const HWInitConvTemp(60.0);     // [deg C], standard init hot water vol to mass flow conversion temp
    Real64 const SteamInitConvTemp(100.0); // [deg C], standard init steam vol to mass flow conversion temp

    Real64 const StefanBoltzmann(5.6697E-8);     // Stefan-Boltzmann constant in W/(m2*K4)
    Real64 const UniversalGasConst(8314.462175); // (J/mol*K)

    Real64 const convertJtoGJ(1.0E-9); // Conversion factor for J to GJ

    // Parameters for EMS Calling Points
    int const emsCallFromZoneSizing(1);                           // Identity where EMS called from
    int const emsCallFromSystemSizing(2);                         // Identity where EMS called from
    int const emsCallFromBeginNewEvironment(3);                   // Identity where EMS called from
    int const emsCallFromBeginNewEvironmentAfterWarmUp(4);        // Identity where EMS called from
    int const emsCallFromBeginTimestepBeforePredictor(5);         // Identity where EMS called from
    int const emsCallFromBeforeHVACManagers(6);                   // Identity where EMS called from
    int const emsCallFromAfterHVACManagers(7);                    // Identity where EMS called from
    int const emsCallFromHVACIterationLoop(8);                    // Identity where EMS called from
    int const emsCallFromEndSystemTimestepBeforeHVACReporting(9); // Identity where EMS called from
    int const emsCallFromEndSystemTimestepAfterHVACReporting(10); // Identity where EMS called from
    int const emsCallFromEndZoneTimestepBeforeZoneReporting(11);  // Identity where EMS called from
    int const emsCallFromEndZoneTimestepAfterZoneReporting(12);   // Identity where EMS called from
    int const emsCallFromSetupSimulation(13);                     // identify where EMS called from,
    // this is for input processing only
    int const emsCallFromExternalInterface(14);         // Identity where EMS called from
    int const emsCallFromComponentGetInput(15);         // EMS called from end of get input for a component
    int const emsCallFromUserDefinedComponentModel(16); // EMS called from inside a custom user component model
    int const emsCallFromUnitarySystemSizing(17);       // EMS called from unitary system compound component
    int const emsCallFromBeginZoneTimestepBeforeInitHeatBalance(18); // Identity where EMS called from
    int const emsCallFromBeginZoneTimestepAfterInitHeatBalance(19); // Identity where EMS called from

    int const ScheduleAlwaysOn(-1); // Value when passed to schedule routines gives back 1.0 (on)

    // DERIVED TYPE DEFINITIONS:
    // na

    // INTERFACE BLOCK SPECIFICATIONS:
    // see DataOmterfaces fpr global interface statements

    // MODULE VARIABLE DECLARATIONS:

    struct JsonOutputStreams
    {
        std::ostream *json_stream = nullptr; // Internal stream used for json output
        std::ostream *json_TSstream_Zone = nullptr;
        std::ostream *json_TSstream_HVAC = nullptr;
        std::ostream *json_TSstream = nullptr;
        std::ostream *json_HRstream = nullptr;
        std::ostream *json_MNstream = nullptr;
        std::ostream *json_DYstream = nullptr;
        std::ostream *json_SMstream = nullptr;
        std::ostream *json_YRstream = nullptr;
        std::ostream *cbor_stream = nullptr; // Internal stream used for cbor output
        std::ostream *cbor_TSstream_Zone = nullptr;
        std::ostream *cbor_TSstream_HVAC = nullptr;
        std::ostream *cbor_TSstream = nullptr;
        std::ostream *cbor_HRstream = nullptr;
        std::ostream *cbor_MNstream = nullptr;
        std::ostream *cbor_DYstream = nullptr;
        std::ostream *cbor_SMstream = nullptr;
        std::ostream *cbor_YRstream = nullptr;
        std::ostream *msgpack_stream = nullptr; // Internal stream used for messagepack output
        std::ostream *msgpack_TSstream_Zone = nullptr;
        std::ostream *msgpack_TSstream_HVAC = nullptr;
        std::ostream *msgpack_TSstream = nullptr;
        std::ostream *msgpack_HRstream = nullptr;
        std::ostream *msgpack_MNstream = nullptr;
        std::ostream *msgpack_DYstream = nullptr;
        std::ostream *msgpack_SMstream = nullptr;
        std::ostream *msgpack_YRstream = nullptr;

        int OutputFileJson = 0; // Unit number for Schema output
        int OutputFileTSZoneJson = 0;
        int OutputFileTSHVACJson = 0;
        int OutputFileTSJson = 0;
        int OutputFileHRJson = 0;
        int OutputFileDYJson = 0;
        int OutputFileMNJson = 0;
        int OutputFileSMJson = 0;
        int OutputFileYRJson = 0;
        int OutputFileCBOR = 0; // Unit number for Schema output
        int OutputFileTSZoneCBOR = 0;
        int OutputFileTSHVACCBOR = 0;
        int OutputFileTSCBOR = 0;
        int OutputFileHRCBOR = 0;
        int OutputFileDYCBOR = 0;
        int OutputFileMNCBOR = 0;
        int OutputFileSMCBOR = 0;
        int OutputFileYRCBOR = 0;
        int OutputFileMsgPack = 0; // Unit number for Schema output
        int OutputFileTSZoneMsgPack = 0;
        int OutputFileTSHVACMsgPack = 0;
        int OutputFileTSMsgPack = 0;
        int OutputFileHRMsgPack = 0;
        int OutputFileDYMsgPack = 0;
        int OutputFileMNMsgPack = 0;
        int OutputFileSMMsgPack = 0;
        int OutputFileYRMsgPack = 0;
    };

    extern bool BeginDayFlag;           // True at the start of each day, False after first time step in day
    extern bool BeginEnvrnFlag;         // True at the start of each environment, False after first time step in environ
    extern bool BeginHourFlag;          // True at the start of each hour, False after first time step in hour
    extern bool BeginSimFlag;           // True until any actual simulation (full or sizing) has begun, False after first time step
    extern bool BeginFullSimFlag;       // True until full simulation has begun, False after first time step
    extern bool BeginTimeStepFlag;      // True at the start of each time step, False after first subtime step of time step
    extern int DayOfSim;                // Counter for days (during the simulation)
    extern std::string DayOfSimChr;     // Counter for days (during the simulation) (character -- for reporting)
    extern int CalendarYear;            // Calendar year of the current day of simulation
    extern std::string CalendarYearChr; // Calendar year of the current day of simulation (character -- for reporting)
    extern bool EndEnvrnFlag;           // True at the end of each environment (last time step of last hour of last day of environ)
    extern bool EndDesignDayEnvrnsFlag; // True at the end of the last design day environment
    // (last time step of last hour of last day of environ which is a design day)
    extern bool EndDayFlag;                          // True at the end of each day (last time step of last hour of day)
    extern bool EndHourFlag;                         // True at the end of each hour (last time step of hour)
    extern int PreviousHour;                         // Previous Hour Index
    extern int HourOfDay;                            // Counter for hours in a simulation day
    extern Real64 WeightPreviousHour;                // Weighting of value for previous hour
    extern Real64 WeightNow;                         // Weighting of value for current hour
    extern int NumOfDayInEnvrn;                      // Number of days in the simulation for a particular environment
    extern int NumOfTimeStepInHour;                  // Number of time steps in each hour of the simulation
    extern int NumOfZones;                           // Total number of Zones for simulation
    extern int TimeStep;                             // Counter for time steps (fractional hours)
    extern Real64 TimeStepZone;                      // Zone time step in fractional hours
    extern bool WarmupFlag;                          // True during the warmup portion of a simulation
    extern int OutputFileStandard;                   // Unit number for the standard output file (hourly data only)
    extern std::ostream *eso_stream;                 // Internal stream used for eso output (used for performance)
    extern JsonOutputStreams jsonOutputStreams;      // Internal streams used for json outputs
    extern int OutputStandardError;                  // Unit number for the standard error output file
    extern std::ostream *err_stream;                 // Internal stream used for err output (used for performance)
    extern int StdOutputRecordCount;                 // Count of Standard output records
    extern int OutputFileInits;                      // Unit number for the standard Initialization output file
    extern std::ostream *eio_stream;                 // Internal stream used for eio output (used for unit tests)
    extern int OutputFileDebug;                      // Unit number for debug outputs
    extern int OutputFileZoneSizing;                 // Unit number of zone sizing calc output file
    extern int OutputFileSysSizing;                  // Unit number of system sizing calc output file
    extern int OutputFileMeters;                     // Unit number for meters output
    extern std::ostream *mtr_stream;                 // Internal stream used for mtr output (used for performance)
    extern int OutputFileShadingFrac;                // Unit number for shading output
    extern int StdMeterRecordCount;                  // Count of Meter output records
    extern int OutputFileBNDetails;                  // Unit number for Branch-Node Details
    extern int OutputDElightIn;                      // Unit number for the DElight In file
    extern std::ostream *delightin_stream;           // Internal stream used for DElight In file
    extern bool ZoneSizingCalc;                      // TRUE if zone sizing calculation
    extern bool SysSizingCalc;                       // TRUE if system sizing calculation
    extern bool DoZoneSizing;                        // User input in SimulationControl object
    extern bool DoSystemSizing;                      // User input in SimulationControl object
    extern bool DoPlantSizing;                       // User input in SimulationControl object
    extern bool DoDesDaySim;                         // User input in SimulationControl object
    extern bool DoWeathSim;                          // User input in SimulationControl object
    extern bool DoHVACSizingSimulation;              // User input in SimulationControl object
    extern int HVACSizingSimMaxIterations;           // User input in SimulationControl object
    extern bool WeathSimReq;                         // Input has a RunPeriod request
    extern int KindOfSim;                            // See parameters. (ksDesignDay, ksRunPeriodDesign, ksRunPeriodWeather)
    extern bool DoOutputReporting;                   // TRUE if variables to be written out
    extern bool DoingSizing;                         // TRUE when "sizing" is being performed (some error messages won't be displayed)
    extern bool DoingHVACSizingSimulations;          // true when HVAC Sizing Simulations are being performed.
    extern bool DoingInputProcessing;                // TRUE when "IP" is being performed (some error messages are cached)
    extern bool DisplayAllWarnings;                  // True when selection for  "DisplayAllWarnings" is entered (turns on other warning flags)
    extern bool DisplayExtraWarnings;                // True when selection for  "DisplayExtraWarnings" is entered
    extern bool DisplayUnusedObjects;                // True when selection for  "DisplayUnusedObjects" is entered
    extern bool DisplayUnusedSchedules;              // True when selection for  "DisplayUnusedSchedules" is entered
    extern bool DisplayAdvancedReportVariables;      // True when selection for  "DisplayAdvancedReportVariables" is entered
    extern bool DisplayZoneAirHeatBalanceOffBalance; // True when selection for  "DisplayZoneAirHeatBalanceOffBalance" is entered
    extern bool DisplayInputInAudit;                 // True when environmental variable "DisplayInputInAudit" is used
    extern bool CreateMinimalSurfaceVariables;       // True when selection for  "CreateMinimalSurfaceVariables" is entered
    extern Real64 CurrentTime;                       // CurrentTime, in fractional hours, from start of day. Uses Loads time step.
    extern int SimTimeSteps;                         // Number of (Loads) timesteps since beginning of run period (environment).
    extern int MinutesPerTimeStep;                   // Minutes per time step calculated from NumTimeStepInHour (number of minutes per load time step)
    extern Real64 TimeStepZoneSec;                   // Seconds per time step
    extern bool MetersHaveBeenInitialized;
    extern bool KickOffSimulation;                 // Kick off simulation -- meaning run each environment for 1 or 2 time steps.
    extern bool KickOffSizing;                     // Kick off sizing -- meaning run each environment for 1 or 2 time steps.
    extern bool RedoSizesHVACSimulation;           // doing kick off simulation for redoing sizes as part of sizing
    extern bool FinalSizingHVACSizingSimIteration; // true if this will be no more HVAC sizing sim iterations
    extern bool AnyEnergyManagementSystemInModel;  // true if there is any EMS or Erl in model.  otherwise false
    extern bool AnyLocalEnvironmentsInModel;       // true if there is any local environmental data objected defined in model, otherwise false
    extern bool AnyPlantInModel;                   // true if there are any plant or condenser loops in model, otherwise false
    extern int CacheIPErrorFile;                   // Cache IP errors until IDF processing done.
    extern bool AnyIdealCondEntSetPointInModel;    // true if there is any ideal condenser entering set point manager in model.
    extern bool RunOptCondEntTemp;                 // true if the ideal condenser entering set point optimization is running
    extern bool CompLoadReportIsReq;               // true if the extra sizing calcs are performed to create a "pulse" for the load component report
    extern bool isPulseZoneSizing;                 // true during the set of zone sizing calcs that include the "pulse" for the load component report
    extern int
        OutputFileZonePulse; // file handle for special zone sizing report that contains the result of the "pulse" for the load component report
    extern bool doLoadComponentPulseNow; // true for the time step that is the "pulse" for the load component report
    extern bool ShowDecayCurvesInEIO;    // true if the Radiant to Convective Decay Curves should appear in the EIO file
    extern bool AnySlabsInModel;         // true if there are any zone-coupled ground domains in the input file
    extern bool AnyBasementsInModel;     // true if there are any basements in the input file
    extern bool DoCoilDirectSolutions;        //true if use coil direction solutions
    extern int Progress;
    extern void (*fProgressPtr)(int const);
    extern void (*fMessagePtr)(std::string const &);

    // Clears the global data in DataGlobals.
    // Needed for unit tests, should not be normally called.
    void clear_state();

} // namespace DataGlobals

} // namespace EnergyPlus

#endif
