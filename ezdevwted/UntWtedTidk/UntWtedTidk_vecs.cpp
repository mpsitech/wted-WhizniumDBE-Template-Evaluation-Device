/**
	* \file UntWtedTidk_vecs.cpp
	* Efinix Titanium Ti180 development kit unit vectors (implementation)
	* \copyright (C) 2016-2020 MPSI Technologies GmbH
	* \author Alexander Wirthmueller (auto-generation)
	* \date created: 30 Jun 2024
	*/
// IP header --- ABOVE

#include "UntWtedTidk_vecs.h"

using namespace std;
using namespace Sbecore;
using namespace Xmlio;

/******************************************************************************
 namespace VecVWtedTidkBuffer
 ******************************************************************************/

uint8_t VecVWtedTidkBuffer::getTix(
			const string& sref
		) {
	string s = StrMod::lc(sref);

	if (s == "cmdrettohostif") return CMDRETTOHOSTIF;
	else if (s == "hostiftocmdinv") return HOSTIFTOCMDINV;
	else if (s == "cntbufmfsmtrack1tohostif") return CNTBUFMFSMTRACK1TOHOSTIF;
	else if (s == "cntbufmfsmtrack0tohostif") return CNTBUFMFSMTRACK0TOHOSTIF;
	else if (s == "fstoccbufmfsmtrack1tohostif") return FSTOCCBUFMFSMTRACK1TOHOSTIF;
	else if (s == "fstoccbufmfsmtrack0tohostif") return FSTOCCBUFMFSMTRACK0TOHOSTIF;
	else if (s == "getbufclienttohostif") return GETBUFCLIENTTOHOSTIF;
	else if (s == "seqbufmfsmtrack1tohostif") return SEQBUFMFSMTRACK1TOHOSTIF;
	else if (s == "seqbufmfsmtrack0tohostif") return SEQBUFMFSMTRACK0TOHOSTIF;
	else if (s == "setbufhostiftoclient") return SETBUFHOSTIFTOCLIENT;

	return(0xFF);
};

string VecVWtedTidkBuffer::getSref(
			const uint8_t tix
		) {
	if (tix == CMDRETTOHOSTIF) return("cmdretToHostif");
	else if (tix == HOSTIFTOCMDINV) return("hostifToCmdinv");
	else if (tix == CNTBUFMFSMTRACK1TOHOSTIF) return("cntbufMfsmtrack1ToHostif");
	else if (tix == CNTBUFMFSMTRACK0TOHOSTIF) return("cntbufMfsmtrack0ToHostif");
	else if (tix == FSTOCCBUFMFSMTRACK1TOHOSTIF) return("fstoccbufMfsmtrack1ToHostif");
	else if (tix == FSTOCCBUFMFSMTRACK0TOHOSTIF) return("fstoccbufMfsmtrack0ToHostif");
	else if (tix == GETBUFCLIENTTOHOSTIF) return("getbufClientToHostif");
	else if (tix == SEQBUFMFSMTRACK1TOHOSTIF) return("seqbufMfsmtrack1ToHostif");
	else if (tix == SEQBUFMFSMTRACK0TOHOSTIF) return("seqbufMfsmtrack0ToHostif");
	else if (tix == SETBUFHOSTIFTOCLIENT) return("setbufHostifToClient");

	return("");
};

void VecVWtedTidkBuffer::fillFeed(
			Feed& feed
		) {
	feed.clear();

	std::set<uint8_t> items = {CMDRETTOHOSTIF,HOSTIFTOCMDINV,CNTBUFMFSMTRACK1TOHOSTIF,CNTBUFMFSMTRACK0TOHOSTIF,FSTOCCBUFMFSMTRACK1TOHOSTIF,FSTOCCBUFMFSMTRACK0TOHOSTIF,GETBUFCLIENTTOHOSTIF,SEQBUFMFSMTRACK1TOHOSTIF,SEQBUFMFSMTRACK0TOHOSTIF,SETBUFHOSTIFTOCLIENT};

	for (auto it = items.begin(); it != items.end(); it++) feed.appendIxSrefTitles(*it, getSref(*it), getSref(*it));
};

/******************************************************************************
 namespace VecVWtedTidkController
 ******************************************************************************/

uint8_t VecVWtedTidkController::getTix(
			const string& sref
		) {
	string s = StrMod::lc(sref);

	if (s == "hostif") return HOSTIF;
	else if (s == "ident") return IDENT;
	else if (s == "client") return CLIENT;
	else if (s == "ddrif") return DDRIF;
	else if (s == "mfsmtrack0") return MFSMTRACK0;
	else if (s == "mfsmtrack1") return MFSMTRACK1;
	else if (s == "mgptrack") return MGPTRACK;
	else if (s == "memgptrack") return MEMGPTRACK;
	else if (s == "rgbled0") return RGBLED0;
	else if (s == "state") return STATE;
	else if (s == "tkclksrc") return TKCLKSRC;
	else if (s == "trafgen") return TRAFGEN;

	return(0xFF);
};

string VecVWtedTidkController::getSref(
			const uint8_t tix
		) {
	if (tix == HOSTIF) return("hostif");
	else if (tix == IDENT) return("ident");
	else if (tix == CLIENT) return("client");
	else if (tix == DDRIF) return("ddrif");
	else if (tix == MFSMTRACK0) return("mfsmtrack0");
	else if (tix == MFSMTRACK1) return("mfsmtrack1");
	else if (tix == MGPTRACK) return("mgptrack");
	else if (tix == MEMGPTRACK) return("memgptrack");
	else if (tix == RGBLED0) return("rgbled0");
	else if (tix == STATE) return("state");
	else if (tix == TKCLKSRC) return("tkclksrc");
	else if (tix == TRAFGEN) return("trafgen");

	return("");
};

void VecVWtedTidkController::fillFeed(
			Feed& feed
		) {
	feed.clear();

	std::set<uint8_t> items = {HOSTIF,IDENT,CLIENT,DDRIF,MFSMTRACK0,MFSMTRACK1,MGPTRACK,MEMGPTRACK,RGBLED0,STATE,TKCLKSRC,TRAFGEN};

	for (auto it = items.begin(); it != items.end(); it++) feed.appendIxSrefTitles(*it, getSref(*it), getSref(*it));
};

/******************************************************************************
 namespace VecVWtedTidkState
 ******************************************************************************/

uint8_t VecVWtedTidkState::getTix(
			const string& sref
		) {
	string s = StrMod::lc(sref);

	if (s == "nc") return NC;
	else if (s == "ready") return READY;
	else if (s == "active") return ACTIVE;

	return(0xFF);
};

string VecVWtedTidkState::getSref(
			const uint8_t tix
		) {
	if (tix == NC) return("nc");
	else if (tix == READY) return("ready");
	else if (tix == ACTIVE) return("active");

	return("");
};

string VecVWtedTidkState::getTitle(
			const uint8_t tix
		) {
	if (tix == NC) return("offline");
	if (tix == READY) return("ready");
	if (tix == ACTIVE) return("streaming");

	return(getSref(tix));
};

void VecVWtedTidkState::fillFeed(
			Feed& feed
		) {
	feed.clear();

	std::set<uint8_t> items = {NC,READY,ACTIVE};

	for (auto it = items.begin(); it != items.end(); it++) feed.appendIxSrefTitles(*it, getSref(*it), getTitle(*it));
};

/******************************************************************************
 namespace VecVWtedTidkClientGetbufB
 ******************************************************************************/

uint8_t VecVWtedTidkClientGetbufB::getTix(
			const string& sref
		) {
	string s = StrMod::lc(sref);

	if (s == "init") return INIT;
	else if (s == "idle") return IDLE;
	else if (s == "trylock") return TRYLOCK;
	else if (s == "xfera") return XFERA;
	else if (s == "xferb") return XFERB;
	else if (s == "done") return DONE;
	else if (s == "unlock") return UNLOCK;

	return(0xFF);
};

string VecVWtedTidkClientGetbufB::getSref(
			const uint8_t tix
		) {
	if (tix == INIT) return("init");
	else if (tix == IDLE) return("idle");
	else if (tix == TRYLOCK) return("trylock");
	else if (tix == XFERA) return("xferA");
	else if (tix == XFERB) return("xferB");
	else if (tix == DONE) return("done");
	else if (tix == UNLOCK) return("unlock");

	return("");
};

void VecVWtedTidkClientGetbufB::fillFeed(
			Feed& feed
		) {
	feed.clear();

	std::set<uint8_t> items = {INIT,IDLE,TRYLOCK,XFERA,XFERB,DONE,UNLOCK};

	for (auto it = items.begin(); it != items.end(); it++) feed.appendIxSrefTitles(*it, getSref(*it), getSref(*it));
};

/******************************************************************************
 namespace VecVWtedTidkClientSetbufB
 ******************************************************************************/

uint8_t VecVWtedTidkClientSetbufB::getTix(
			const string& sref
		) {
	string s = StrMod::lc(sref);

	if (s == "init") return INIT;
	else if (s == "idle") return IDLE;
	else if (s == "trylock") return TRYLOCK;
	else if (s == "write") return WRITE;
	else if (s == "done") return DONE;
	else if (s == "unlock") return UNLOCK;

	return(0xFF);
};

string VecVWtedTidkClientSetbufB::getSref(
			const uint8_t tix
		) {
	if (tix == INIT) return("init");
	else if (tix == IDLE) return("idle");
	else if (tix == TRYLOCK) return("trylock");
	else if (tix == WRITE) return("write");
	else if (tix == DONE) return("done");
	else if (tix == UNLOCK) return("unlock");

	return("");
};

void VecVWtedTidkClientSetbufB::fillFeed(
			Feed& feed
		) {
	feed.clear();

	std::set<uint8_t> items = {INIT,IDLE,TRYLOCK,WRITE,DONE,UNLOCK};

	for (auto it = items.begin(); it != items.end(); it++) feed.appendIxSrefTitles(*it, getSref(*it), getSref(*it));
};