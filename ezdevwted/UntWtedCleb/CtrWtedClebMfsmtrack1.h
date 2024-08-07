/**
	* \file CtrWtedClebMfsmtrack1.h
	* mfsmtrack1 controller (declarations)
	* \copyright (C) 2016-2020 MPSI Technologies GmbH
	* \author Alexander Wirthmueller (auto-generation)
	* \date created: 30 Jun 2024
	*/
// IP header --- ABOVE

#ifndef CTRWTEDCLEBMFSMTRACK1_H
#define CTRWTEDCLEBMFSMTRACK1_H

#include "Wted.h"

#define CmdWtedClebMfsmtrack1GetInfo CtrWtedClebMfsmtrack1::CmdGetInfo

#define VecVWtedClebMfsmtrack1Capture CtrWtedClebMfsmtrack1::VecVCapture
#define VecVWtedClebMfsmtrack1Command CtrWtedClebMfsmtrack1::VecVCommand
#define VecVWtedClebMfsmtrack1State CtrWtedClebMfsmtrack1::VecVState
#define VecVWtedClebMfsmtrack1Trigger CtrWtedClebMfsmtrack1::VecVTrigger

/**
	* CtrWtedClebMfsmtrack1
	*/
class CtrWtedClebMfsmtrack1 : public CtrWted {

public:
	/**
		* VecVCapture (full: VecVWtedClebMfsmtrack1Capture)
		*/
	class VecVCapture {

	public:
		static constexpr uint8_t TKCLKSRCOP = 0x01;

		static uint8_t getTix(const std::string& sref);
		static std::string getSref(const uint8_t tix);

		static std::string getTitle(const uint8_t tix);

		static void fillFeed(Sbecore::Feed& feed);
	};

	/**
		* VecVCommand (full: VecVWtedClebMfsmtrack1Command)
		*/
	class VecVCommand {

	public:
		static constexpr uint8_t GETINFO = 0x00;
		static constexpr uint8_t SELECT = 0x01;
		static constexpr uint8_t SET = 0x02;

		static uint8_t getTix(const std::string& sref);
		static std::string getSref(const uint8_t tix);

		static void fillFeed(Sbecore::Feed& feed);
	};

	/**
		* VecVState (full: VecVWtedClebMfsmtrack1State)
		*/
	class VecVState {

	public:
		static constexpr uint8_t IDLE = 0x00;
		static constexpr uint8_t ARM = 0x01;
		static constexpr uint8_t ACQ = 0x02;
		static constexpr uint8_t DONE = 0x03;

		static uint8_t getTix(const std::string& sref);
		static std::string getSref(const uint8_t tix);

		static std::string getTitle(const uint8_t tix);

		static void fillFeed(Sbecore::Feed& feed);
	};

	/**
		* VecVTrigger (full: VecVWtedClebMfsmtrack1Trigger)
		*/
	class VecVTrigger {

	public:
		static constexpr uint8_t VOID = 0x00;
		static constexpr uint8_t HOSTIFRXAXISTVALID = 0x02;
		static constexpr uint8_t ACKINVTKCLKSRCSETTKST = 0x03;

		static uint8_t getTix(const std::string& sref);
		static std::string getSref(const uint8_t tix);

		static std::string getTitle(const uint8_t tix);

		static void fillFeed(Sbecore::Feed& feed);
	};

public:
	CtrWtedClebMfsmtrack1(UntWted* unt);
	~CtrWtedClebMfsmtrack1();

public:
	static const uint8_t tixVController = 0x03;

public:
	Dbecore::Cmd* cmdGetInfo;
	Dbecore::Cmd* cmdSelect;
	Dbecore::Cmd* cmdSet;

public:
	static uint8_t getTixVCommandBySref(const std::string& sref);
	static std::string getSrefByTixVCommand(const uint8_t tixVCommand);
	static void fillFeedFCommand(Sbecore::Feed& feed);

	static Dbecore::Cmd* getNewCmd(const uint8_t tixVCommand);

	static Dbecore::Cmd* getNewCmdGetInfo();
	void getInfo(uint8_t& tixVState, unsigned char*& coverage, size_t& coveragelen);

	static Dbecore::Cmd* getNewCmdSelect();
	void select(const uint8_t tixVCapture, const uint8_t staTixVTrigger, const bool staFallingNotRising, const uint8_t stoTixVTrigger, const bool stoFallingNotRising);

	static Dbecore::Cmd* getNewCmdSet();
	void set(const bool rng, const uint32_t TCapt);

};

#endif
