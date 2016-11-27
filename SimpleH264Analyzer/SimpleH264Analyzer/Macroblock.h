#ifndef _MACROBLOCK_H_
#define _MACROBLOCK_H_

class CMacroblock
{
public:
	CMacroblock(UINT8 *pSODB, UINT32 offset);
	virtual ~CMacroblock();

	UINT32 Parse_macroblock();

private:
	UINT8  *m_pSODB;

	UINT8  m_mb_type;
};

#endif
