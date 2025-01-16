#pragma once

#include <SWA.inl>

namespace SWA
{
    class CGameParameter // : public Hedgehog::Universe::CMessageActor
    {
    public:
        struct SSaveData;
        struct SStageParameter 
        {
            hh::map<int, int> m_Field00;
            xpointer<void> m_FieldC;
            xpointer<void> m_Field10;
            xpointer<void> m_Field14;
            xpointer<void> m_Field18;
            int m_Field1C;
            char m_Field20;
            void* dword28;
        };

        SWA_INSERT_PADDING(0x94);
        xpointer<SSaveData> m_pSaveData;
        xpointer<SStageParameter> m_pStageParameter;
    };
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_Field00, 0x00);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_FieldC, 0x0C);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_Field10, 0x10);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_Field14, 0x14);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_Field18, 0x18);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_Field1C, 0x1C);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, m_Field20, 0x20);
    SWA_ASSERT_OFFSETOF(CGameParameter::SStageParameter, dword28, 0x28);
}
