// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

// This file holds global data for DolphinWx and DebuggerWx

#pragma once

#include <cstddef>
#include <wx/event.h>

enum
{
	Toolbar_Step,
	Toolbar_StepOver,
	Toolbar_StepOut,
	Toolbar_Skip,
	Toolbar_GotoPC,
	Toolbar_SetPC,
	Toolbar_Debug_Bitmap_Max
};

enum
{
	// Emulation menu
	IDM_LOAD_STATE = 200,
	IDM_SAVE_STATE,
	IDM_SELECT_SLOT,
	IDM_SAVE_FIRST_STATE,
	IDM_UNDO_LOAD_STATE,
	IDM_UNDO_SAVE_STATE,
	IDM_LOAD_STATE_FILE,
	IDM_SAVE_STATE_FILE,
	IDM_SAVE_SLOT_1,
	IDM_SAVE_SLOT_2,
	IDM_SAVE_SLOT_3,
	IDM_SAVE_SLOT_4,
	IDM_SAVE_SLOT_5,
	IDM_SAVE_SLOT_6,
	IDM_SAVE_SLOT_7,
	IDM_SAVE_SLOT_8,
	IDM_SAVE_SLOT_9,
	IDM_SAVE_SLOT_10,
	IDM_LOAD_SLOT_1,
	IDM_LOAD_SLOT_2,
	IDM_LOAD_SLOT_3,
	IDM_LOAD_SLOT_4,
	IDM_LOAD_SLOT_5,
	IDM_LOAD_SLOT_6,
	IDM_LOAD_SLOT_7,
	IDM_LOAD_SLOT_8,
	IDM_LOAD_SLOT_9,
	IDM_LOAD_SLOT_10,
	IDM_LOAD_LAST_1,
	IDM_LOAD_LAST_2,
	IDM_LOAD_LAST_3,
	IDM_LOAD_LAST_4,
	IDM_LOAD_LAST_5,
	IDM_LOAD_LAST_6,
	IDM_LOAD_LAST_7,
	IDM_LOAD_LAST_8,
	IDM_LOAD_LAST_9,
	IDM_LOAD_LAST_10,
	IDM_SELECT_SLOT_1,
	IDM_SELECT_SLOT_2,
	IDM_SELECT_SLOT_3,
	IDM_SELECT_SLOT_4,
	IDM_SELECT_SLOT_5,
	IDM_SELECT_SLOT_6,
	IDM_SELECT_SLOT_7,
	IDM_SELECT_SLOT_8,
	IDM_SELECT_SLOT_9,
	IDM_SELECT_SLOT_10,
	IDM_SAVE_SELECTED_SLOT,
	IDM_LOAD_SELECTED_SLOT,
	IDM_FRAME_SKIP_0,
	IDM_FRAME_SKIP_1,
	IDM_FRAME_SKIP_2,
	IDM_FRAME_SKIP_3,
	IDM_FRAME_SKIP_4,
	IDM_FRAME_SKIP_5,
	IDM_FRAME_SKIP_6,
	IDM_FRAME_SKIP_7,
	IDM_FRAME_SKIP_8,
	IDM_FRAME_SKIP_9,
	IDM_PLAY,
	IDM_STOP,
	IDM_RESET,
	IDM_TOGGLE_FULLSCREEN,

	// Movie menu
	IDM_RECORD,
	IDM_PLAY_RECORD,
	IDM_RECORD_EXPORT,
	IDM_RECORD_READ_ONLY,
	IDM_TAS_INPUT,
	IDM_TOGGLE_PAUSE_MOVIE,
	IDM_SHOW_LAG,
	IDM_SHOW_FRAME_COUNT,
	IDM_SHOW_INPUT_DISPLAY,
	IDM_SHOW_RTC_DISPLAY,
	IDM_FRAMESTEP,
	IDM_SCREENSHOT,
	IDM_TOGGLE_DUMP_FRAMES,
	IDM_TOGGLE_DUMP_AUDIO,

	// File menu
	IDM_DRIVES,
	IDM_DRIVE1,
	IDM_DRIVE24 = IDM_DRIVE1 + 23,  // 248,

	// Tools menu
	IDM_MEMCARD,
	IDM_CHEATS,
	IDM_NETPLAY,
	IDM_RESTART,
	IDM_CHANGE_DISC,
	IDM_LIST_CHANGE_DISC,
	IDM_PROPERTIES,
	IDM_GAME_WIKI,
	IDM_LOAD_WII_MENU,
	IDM_MENU_INSTALL_WAD,
	IDM_LIST_INSTALL_WAD,
	IDM_FIFOPLAYER,
	IDM_CONNECT_WIIMOTE1,
	IDM_CONNECT_WIIMOTE2,
	IDM_CONNECT_WIIMOTE3,
	IDM_CONNECT_WIIMOTE4,
	IDM_CONNECT_BALANCEBOARD,

	// View menu
	IDM_LIST_WAD,
	IDM_LIST_WII,
	IDM_LIST_GC,
	IDM_LIST_ELFDOL,
	IDM_LIST_JAP,
	IDM_LIST_PAL,
	IDM_LIST_USA,
	IDM_LIST_AUSTRALIA,
	IDM_LIST_FRANCE,
	IDM_LIST_GERMANY,
	IDM_LIST_ITALY,
	IDM_LIST_KOREA,
	IDM_LIST_NETHERLANDS,
	IDM_LIST_RUSSIA,
	IDM_LIST_SPAIN,
	IDM_LIST_TAIWAN,
	IDM_LIST_WORLD,
	IDM_LIST_UNKNOWN,
	IDM_LIST_DRIVES,
	IDM_PURGE_GAME_LIST_CACHE,

	// Help menu
	IDM_HELP_WEBSITE,
	IDM_HELP_ONLINE_DOCS,
	IDM_HELP_GITHUB,

	// Options menu
	IDM_CONFIG_GFX_BACKEND,
	IDM_CONFIG_AUDIO,
	IDM_CONFIG_CONTROLLERS,
	IDM_CONFIG_HOTKEYS,
	IDM_CONFIG_LOGGER,

	// Views
	// IMPORTANT: Make sure IDM_FLOAT_xxx and IDM_xxx_PARENT are kept in sync!
	IDM_DEBUG_WINDOW_LIST_START,  // Bookend for doing array lookups
	IDM_LOG_WINDOW = IDM_DEBUG_WINDOW_LIST_START,
	IDM_LOG_CONFIG_WINDOW,
	IDM_REGISTER_WINDOW,
	IDM_WATCH_WINDOW,
	IDM_BREAKPOINT_WINDOW,
	IDM_MEMORY_WINDOW,
	IDM_JIT_WINDOW,
	IDM_SOUND_WINDOW,
	IDM_VIDEO_WINDOW,
	IDM_CODE_WINDOW,
	IDM_DEBUG_WINDOW_LIST_END,  // Bookend for doing array lookups

	// List Column Title Toggles
	IDM_SHOW_SYSTEM = IDM_DEBUG_WINDOW_LIST_END,
	IDM_SHOW_BANNER,
	IDM_SHOW_MAKER,
	IDM_SHOW_FILENAME,
	IDM_SHOW_ID,
	IDM_SHOW_REGION,
	IDM_SHOW_SIZE,
	IDM_SHOW_STATE,

	// Float Window IDs
	IDM_LOG_WINDOW_PARENT,
	IDM_LOG_CONFIG_WINDOW_PARENT,
	IDM_REGISTER_WINDOW_PARENT,
	IDM_WATCH_WINDOW_PARENT,
	IDM_BREAKPOINT_WINDOW_PARENT,
	IDM_MEMORY_WINDOW_PARENT,
	IDM_JIT_WINDOW_PARENT,
	IDM_SOUND_WINDOW_PARENT,
	IDM_VIDEO_WINDOW_PARENT,
	IDM_CODE_WINDOW_PARENT,

	// Float popup menu IDs
	IDM_FLOAT_LOG_WINDOW,
	IDM_FLOAT_LOG_CONFIG_WINDOW,
	IDM_FLOAT_REGISTER_WINDOW,
	IDM_FLOAT_WATCH_WINDOW,
	IDM_FLOAT_BREAKPOINT_WINDOW,
	IDM_FLOAT_MEMORY_WINDOW,
	IDM_FLOAT_JIT_WINDOW,
	IDM_FLOAT_SOUND_WINDOW,
	IDM_FLOAT_VIDEO_WINDOW,
	IDM_FLOAT_CODE_WINDOW,

	// --------------------------------------------------------------
	// Debugger Menu Entries
	// --------------------
	// CPU Mode
	IDM_INTERPRETER,
	IDM_AUTOMATIC_START,
	IDM_BOOT_TO_PAUSE,
	IDM_JIT_NO_BLOCK_CACHE,
	IDM_JIT_NO_BLOCK_LINKING,  // JIT
	IDM_JIT_OFF,
	IDM_JIT_LS_OFF,
	IDM_JIT_LSLXZ_OFF,
	IDM_JIT_LSLWZ_OFF,
	IDM_JIT_LSLBZX_OFF,
	IDM_JIT_LSP_OFF,
	IDM_JIT_LSF_OFF,
	IDM_JIT_I_OFF,
	IDM_JIT_FP_OFF,
	IDM_JIT_P_OFF,
	IDM_JIT_SR_OFF,
	IDM_FONT_PICKER,

	// Symbols
	IDM_CLEAR_SYMBOLS,
	IDM_SCAN_FUNCTIONS,
	IDM_LOAD_MAP_FILE,
	IDM_LOAD_MAP_FILE_AS,
	IDM_LOAD_BAD_MAP_FILE,
	IDM_SAVEMAPFILE,
	IDM_SAVE_MAP_FILE_WITH_CODES,
	IDM_SAVE_MAP_FILE_AS,
	IDM_CREATE_SIGNATURE_FILE,
	IDM_APPEND_SIGNATURE_FILE,
	IDM_COMBINE_SIGNATURE_FILES,
	IDM_RENAME_SYMBOLS,
	IDM_USE_SIGNATURE_FILE,
	IDM_PATCH_HLE_FUNCTIONS,

	// JIT
	IDM_CLEAR_CODE_CACHE,
	IDM_LOG_INSTRUCTIONS,
	IDM_SEARCH_INSTRUCTION,

	// Profiler
	IDM_PROFILE_BLOCKS,
	IDM_WRITE_PROFILE,
	// --------------------------------------------------------------

	// --------------------------------------------------------------
	// Debugger Toolbar
	// --------------------
	ID_TOOLBAR_DEBUG,
	IDM_STEP,
	IDM_STEPOVER,
	IDM_STEPOUT,
	IDM_TOGGLE_BREAKPOINT,
	IDM_SKIP,
	IDM_SETPC,
	IDM_GOTOPC,
	IDM_ADDRBOX,

	ID_TOOLBAR_AUI,
	IDM_SAVE_PERSPECTIVE,
	IDM_ADD_PERSPECTIVE,
	IDM_PERSPECTIVES_ADD_PANE_TOP,
	IDM_PERSPECTIVES_ADD_PANE_BOTTOM,
	IDM_PERSPECTIVES_ADD_PANE_LEFT,
	IDM_PERSPECTIVES_ADD_PANE_RIGHT,
	IDM_PERSPECTIVES_ADD_PANE_CENTER,
	IDM_EDIT_PERSPECTIVES,
	IDM_TAB_SPLIT,
	IDM_NO_DOCKING,
	IDM_PERSPECTIVES_0,
	IDM_PERSPECTIVES_100 = IDM_PERSPECTIVES_0 + 100,
	// --------------------------------------------------------------

	IDM_TOGGLE_DUAL_CORE,  // Other
	IDM_TOGGLE_TOOLBAR,
	IDM_TOGGLE_STATUSBAR,
	IDM_NOTIFY_MAP_LOADED,
	IDM_OPEN_CONTAINING_FOLDER,
	IDM_OPEN_SAVE_FOLDER,
	IDM_EXPORT_SAVE,
	IDM_IMPORT_SAVE,
	IDM_EXPORT_ALL_SAVE,
	IDM_SET_DEFAULT_ISO,
	IDM_DELETE_ISO,
	IDM_COMPRESS_ISO,
	IDM_START_NETPLAY,
	IDM_MULTI_COMPRESS_ISO,
	IDM_MULTI_DECOMPRESS_ISO,
	IDM_UPDATE_DISASM_DIALOG,
	IDM_UPDATE_GUI,
	IDM_UPDATE_STATUS_BAR,
	IDM_UPDATE_TITLE,
	IDM_UPDATE_BREAKPOINTS,
	IDM_UPDATE_JIT_PANE,
	IDM_PANIC,
	IDM_KEYSTATE,
	IDM_WINDOW_SIZE_REQUEST,
	IDM_STOPPED,
	IDM_HOST_MESSAGE,
	IDM_FULLSCREEN_REQUEST,

	// Used for Host_ConnectWiimote()
	IDM_FORCE_CONNECT_WIIMOTE1,
	IDM_FORCE_CONNECT_WIIMOTE2,
	IDM_FORCE_CONNECT_WIIMOTE3,
	IDM_FORCE_CONNECT_WIIMOTE4,
	IDM_FORCE_CONNECT_BALANCEBOARD,
	IDM_FORCE_DISCONNECT_WIIMOTE1,
	IDM_FORCE_DISCONNECT_WIIMOTE2,
	IDM_FORCE_DISCONNECT_WIIMOTE3,
	IDM_FORCE_DISCONNECT_WIIMOTE4,
	IDM_FORCE_DISCONNECT_BALANCEBOARD,

	IDM_MPANEL,
	ID_STATUSBAR,

	IDM_FREELOOK_DECREASE_SPEED,
	IDM_FREELOOK_INCREASE_SPEED,
	IDM_FREELOOK_RESET_SPEED,
	IDM_FREELOOK_UP,
	IDM_FREELOOK_DOWN,
	IDM_FREELOOK_LEFT,
	IDM_FREELOOK_RIGHT,
	IDM_FREELOOK_ZOOM_IN,
	IDM_FREELOOK_ZOOM_OUT,
	IDM_FREELOOK_RESET,

	ID_TOOLBAR = 500,
};

// custom message macro
#define EVT_HOST_COMMAND(id, fn) EVT_COMMAND(id, wxEVT_HOST_COMMAND, fn)

// FIXME: This should be changed to wxThreadEvent
wxDECLARE_EVENT(wxEVT_HOST_COMMAND, wxCommandEvent);

// Sent to wxTheApp
// GetString() == Game's Unique ID
// GetInt() == Game's Revision
wxDECLARE_EVENT(DOLPHIN_EVT_LOCAL_INI_CHANGED, wxCommandEvent);
