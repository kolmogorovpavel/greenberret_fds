
		ORG $8000

		BANK_START $03

		SECTION_START
		FAR_PTR _chr13_PO6D
		INCLUDE "..\PO6D.inc"
		SECTION_END "CHR PO6D"

		SECTION_START
		FAR_PTR _chr17_game_over
		.BYTE $B0,$00,$03,$63,$81,$7F,$03,$63,$81,$00,$03,$63,$81,$7F,$03,$63
		.BYTE $82,$00,$3F,$05,$0C,$83,$3F,$00,$3F,$05,$0C,$81,$3F,$04,$00,$8E
		.BYTE $10,$30,$60,$40,$00,$03,$17,$0E,$14,$3A,$70,$60,$00,$7E,$03,$63
		.BYTE $85,$7E,$60,$60,$00,$7E,$03,$63,$83,$7E,$60,$60,$03,$00,$84,$7E
		.BYTE $00,$00,$7E,$04,$00,$95,$7E,$00,$00,$7E,$00,$00,$63,$63,$6B,$7F
		.BYTE $7F,$77,$63,$00,$63,$63,$6B,$7F,$7F,$77,$63,$09,$00,$08,$FF,$81
		.BYTE $00,$0B,$FF,$04,$00,$8D,$7F,$61,$75,$30,$2A,$10,$12,$62,$00,$1E
		.BYTE $2A,$4F,$57,$03,$7F,$98,$7A,$CB,$B3,$2A,$96,$03,$68,$80,$84,$34
		.BYTE $4C,$D5,$69,$FC,$97,$FF,$08,$50,$2A,$31,$78,$77,$00,$00,$06,$7F
		.BYTE $8C,$00,$00,$07,$21,$B4,$12,$C8,$72,$00,$00,$F8,$FE,$03,$FF,$81
		.BYTE $FE,$05,$00,$84,$14,$2B,$79,$2F,$04,$00,$84,$1D,$2F,$79,$3F,$04
		.BYTE $00,$84,$94,$D8,$63,$DE,$04,$00,$C2,$DC,$FA,$EF,$FE,$00,$00,$4C
		.BYTE $71,$54,$6B,$79,$2F,$00,$3F,$7F,$7B,$7D,$6F,$79,$3F,$00,$00,$AC
		.BYTE $86,$94,$D9,$63,$DE,$00,$FE,$FF,$EF,$DF,$FB,$EF,$FE,$00,$00,$44
		.BYTE $71,$56,$6A,$79,$2A,$00,$37,$77,$79,$7E,$6E,$7D,$3A,$00,$7F,$61
		.BYTE $75,$30,$2A,$10,$12,$62,$00,$1E,$2A,$4F,$57,$03,$7F,$FE,$7A,$CB
		.BYTE $B3,$2A,$96,$03,$68,$80,$84,$34,$4C,$D5,$69,$FC,$97,$FF,$00,$0C
		.BYTE $11,$3F,$00,$00,$07,$00,$7F,$3F,$1B,$00,$3F,$00,$07,$00,$00,$AC
		.BYTE $86,$FF,$01,$00,$DC,$00,$FE,$FF,$EF,$00,$FE,$01,$FC,$00,$00,$04
		.BYTE $06,$3F,$00,$00,$02,$00,$06,$07,$07,$00,$3F,$00,$02,$00,$00,$4C
		.BYTE $71,$FF,$01,$00,$2F,$00,$3F,$7F,$7B,$00,$FE,$00,$3F,$00,$00,$4C
		.BYTE $71,$FF,$80,$00,$0F,$00,$3F,$7F,$7B,$00,$7F,$00,$1F,$00,$00,$AC
		.BYTE $86,$FF,$01,$00,$DC,$00,$FE,$FF,$EF,$00,$FE,$01,$FC,$00,$00,$AC
		.BYTE $86,$FF,$80,$00,$DE,$00,$FE,$FF,$EF,$00,$7F,$00,$89,$FE,$00,$00
		.BYTE $1F,$5F,$7F,$7F,$00,$1F,$03,$00,$82,$40,$7F,$05,$00,$86,$F8,$FA
		.BYTE $FE,$FE,$00,$F8,$03,$00,$82,$02,$FE,$04,$00,$FF
		SECTION_END "CHR Game Over"

		SECTION_START
		FAR_PTR _chr14_POED1_endingA
		INCLUDE "..\POED1.inc"
		SECTION_END "CHR Ending A (POED1)"

		SECTION_START
		FAR_PTR _chr15_endingB
		.BYTE $20,$10,$8F,$07,$07,$03,$00,$00,$2C,$02,$00,$00,$08,$0C,$07,$01
		.BYTE $2C,$02,$11,$00,$A1,$80,$C0,$E0,$20,$10,$10,$10,$30,$00,$00,$00
		.BYTE $C0,$60,$C0,$A0,$40,$00,$00,$20,$20,$20,$00,$20,$00,$70,$00,$20
		.BYTE $20,$20,$00,$20,$00,$00,$04,$01,$84,$00,$01,$01,$01,$04,$02,$A6
		.BYTE $01,$06,$06,$00,$04,$08,$10,$20,$00,$00,$00,$01,$04,$08,$10,$20
		.BYTE $00,$00,$00,$E0,$E0,$E0,$C0,$C0,$C4,$CA,$84,$00,$00,$08,$14,$08
		.BYTE $10,$00,$00,$18,$60,$80,$05,$00,$83,$10,$60,$80,$05,$00,$8F,$07
		.BYTE $03,$00,$00,$00,$5C,$00,$00,$00,$0C,$07,$06,$01,$5D,$01,$11,$00
		.BYTE $8E,$C0,$E0,$30,$08,$08,$E8,$F0,$00,$00,$00,$C0,$30,$F0,$10,$04
		.BYTE $00,$03,$20,$8A,$00,$20,$00,$28,$00,$20,$20,$20,$00,$20,$07,$00
		.BYTE $82,$07,$0F,$08,$00,$AE,$0C,$60,$70,$71,$21,$19,$18,$03,$13,$6D
		.BYTE $73,$76,$26,$1A,$18,$00,$00,$00,$78,$88,$00,$70,$70,$40,$00,$00
		.BYTE $08,$78,$80,$70,$70,$40,$00,$40,$C0,$C2,$DA,$9A,$00,$00,$80,$80
		.BYTE $10,$02,$1A,$1A,$09,$00,$81,$01,$08,$00,$B0,$03,$04,$00,$03,$07
		.BYTE $01,$00,$00,$00,$03,$04,$03,$07,$01,$00,$02,$00,$1A,$22,$00,$1C
		.BYTE $0C,$E0,$E0,$00,$06,$1E,$20,$1C,$2C,$10,$10,$C0,$80,$08,$30,$90
		.BYTE $EC,$7C,$00,$38,$58,$B0,$40,$80,$EC,$7C,$80,$06,$00,$82,$03,$44
		.BYTE $06,$00,$A8,$1C,$5B,$4D,$63,$43,$63,$03,$01,$00,$00,$52,$6C,$4C
		.BYTE $6C,$0C,$0E,$07,$08,$00,$00,$78,$88,$00,$70,$30,$A0,$00,$00,$08
		.BYTE $78,$80,$70,$30,$20,$C0,$E0,$F0,$F6,$6E,$1C,$05,$00,$83,$06,$0E
		.BYTE $1C,$04,$00,$86,$01,$00,$00,$00,$07,$07,$07,$00,$E4,$08,$18,$14
		.BYTE $20,$30,$70,$60,$43,$E3,$07,$0B,$2D,$33,$77,$60,$4C,$EC,$C3,$C0
		.BYTE $00,$00,$00,$04,$08,$14,$CC,$C7,$09,$0E,$0E,$0A,$16,$08,$08,$10
		.BYTE $10,$20,$40,$60,$08,$00,$04,$10,$10,$20,$40,$60,$08,$00,$00,$80
		.BYTE $E0,$30,$60,$E0,$40,$80,$00,$60,$18,$00,$60,$E0,$40,$00,$C0,$40
		.BYTE $50,$C8,$98,$0C,$87,$C7,$00,$80,$90,$08,$18,$0C,$07,$07,$E0,$E8
		.BYTE $18,$00,$00,$20,$20,$40,$00,$10,$E0,$38,$00,$20,$20,$40,$40,$60
		.BYTE $08,$05,$00,$83,$40,$60,$08,$14,$00,$83,$01,$00,$01,$06,$00,$88
		.BYTE $03,$02,$03,$01,$02,$00,$00,$02,$08,$00,$03,$03,$04,$01,$12,$00
		.BYTE $AF,$40,$F0,$18,$30,$70,$20,$50,$00,$30,$0C,$00,$30,$70,$A0,$80
		.BYTE $F0,$A8,$28,$68,$10,$F0,$E0,$F0,$00,$40,$C0,$80,$00,$C0,$C0,$C0
		.BYTE $70,$60,$60,$10,$20,$50,$00,$00,$70,$60,$60,$80,$D0,$A0,$E0,$00
		.BYTE $04,$40,$84,$20,$08,$00,$00,$04,$40,$82,$20,$08,$04,$00,$81,$01
		.BYTE $0B,$00,$E5,$03,$07,$01,$01,$10,$30,$30,$40,$E0,$C0,$06,$06,$15
		.BYTE $35,$36,$47,$E0,$C7,$42,$07,$07,$03,$03,$00,$02,$00,$4D,$08,$08
		.BYTE $04,$04,$0F,$0D,$0F,$00,$08,$08,$08,$10,$10,$02,$00,$02,$08,$08
		.BYTE $08,$10,$10,$02,$00,$00,$80,$E0,$30,$60,$E0,$40,$C0,$00,$60,$18
		.BYTE $00,$60,$E0,$40,$00,$C0,$A0,$40,$20,$70,$70,$38,$0E,$00,$40,$80
		.BYTE $A0,$70,$70,$B8,$CE,$0E,$01,$02,$00,$00,$08,$08,$10,$CE,$D0,$BD
		.BYTE $82,$80,$08,$08,$10,$10,$10,$04,$05,$00,$83,$10,$10,$04,$05,$00
		.BYTE $FE,$10,$11,$00,$10,$00,$10,$17,$07,$10,$10,$01,$13,$00,$10,$10
		.BYTE $08,$18,$24,$30,$1F,$00,$00,$20,$39,$07,$1B,$4C,$60,$3F,$1F,$20
		.BYTE $3A,$39,$1C,$1C,$1C,$10,$04,$08,$14,$3A,$1D,$1D,$1C,$12,$0A,$16
		.BYTE $08,$08,$10,$10,$20,$40,$60,$08,$00,$04,$10,$10,$20,$40,$60,$08
		.BYTE $00,$80,$80,$00,$00,$60,$E0,$40,$80,$40,$E0,$E0,$F0,$60,$E0,$40
		.BYTE $00,$C0,$40,$C0,$C0,$C0,$04,$07,$C7,$80,$40,$D0,$C8,$DC,$9C,$07
		.BYTE $07,$08,$08,$00,$08,$00,$08,$08,$0B,$08,$08,$00,$09,$00,$08,$08
		.BYTE $08,$06,$09,$0C,$07,$00,$00,$10,$1C,$01,$06,$13,$18,$0F,$07,$91
		.BYTE $10,$1D,$1C,$0E,$0E,$0E,$08,$00,$00,$00,$1D,$0E,$0E,$0E,$09,$01
		.BYTE $01,$11,$00,$B0,$40,$C0,$00,$00,$30,$70,$20,$C0,$20,$70,$F0,$F8
		.BYTE $30,$70,$A0,$00,$30,$30,$38,$F8,$38,$10,$00,$60,$E0,$D0,$30,$30
		.BYTE $F0,$E0,$00,$90,$F0,$70,$70,$70,$20,$50,$00,$00,$00,$80,$80,$80
		.BYTE $D0,$A0,$E0,$00,$04,$40,$84,$20,$08,$00,$00,$04,$40,$F7,$20,$08
		.BYTE $00,$00,$08,$09,$00,$08,$00,$08,$0B,$07,$08,$08,$01,$0B,$00,$08
		.BYTE $08,$00,$0C,$12,$18,$0F,$00,$50,$D0,$DC,$03,$2D,$27,$30,$1F,$57
		.BYTE $D0,$DD,$5C,$0E,$0E,$0E,$09,$00,$02,$00,$5D,$0E,$0E,$0E,$08,$07
		.BYTE $0D,$0F,$00,$08,$08,$08,$10,$10,$02,$00,$02,$08,$08,$08,$10,$10
		.BYTE $02,$00,$80,$80,$00,$00,$60,$E0,$40,$C0,$40,$E0,$E0,$F0,$60,$E0
		.BYTE $40,$40,$60,$20,$60,$E0,$60,$00,$00,$80,$C0,$A0,$60,$60,$E0,$C0
		.BYTE $80,$40,$80,$04,$02,$00,$00,$08,$08,$10,$5C,$DA,$BD,$82,$80,$08
		.BYTE $08,$10,$10,$10,$04,$05,$00,$83,$10,$10,$04,$16,$00,$CF,$01,$03
		.BYTE $07,$07,$06,$0E,$1E,$00,$01,$03,$07,$07,$06,$0E,$1E,$00,$01,$02
		.BYTE $00,$08,$00,$2A,$40,$00,$01,$02,$00,$08,$00,$2A,$40,$80,$C0,$80
		.BYTE $01,$03,$03,$00,$00,$81,$C3,$83,$02,$04,$04,$03,$0C,$00,$00,$00
		.BYTE $10,$30,$00,$00,$5C,$00,$00,$00,$08,$1C,$3C,$7E,$DC,$34,$68,$0C
		.BYTE $16,$81,$80,$C0,$40,$C4,$90,$70,$A8,$5E,$6F,$23,$A0,$12,$00,$C0
		.BYTE $0C,$1E,$00,$C0,$D8,$3C,$00,$00,$EC,$FE,$20,$00,$18,$3C,$3C,$78
		.BYTE $18,$00,$0F,$10,$20,$00,$3C,$78,$18,$00,$0F,$10,$20,$00,$00,$01
		.BYTE $06,$08,$08,$04,$00,$00,$00,$01,$06,$08,$08,$04,$00,$00,$C4,$3F
		.BYTE $07,$07,$00,$18,$08,$00,$DB,$35,$18,$58,$5F,$26,$74,$F8,$00,$80
		.BYTE $06,$00,$82,$70,$A0,$06,$00,$82,$20,$40,$06,$00,$83,$20,$C0,$80
		.BYTE $29,$00,$82,$36,$48,$06,$00,$82,$36,$48,$14,$00,$85,$0E,$3F,$E0
		.BYTE $4A,$07,$05,$00,$83,$15,$AA,$F7,$12,$00,$8E,$3F,$A0,$01,$1F,$6A
		.BYTE $80,$00,$00,$00,$1F,$20,$00,$15,$BF,$13,$00,$8D,$C0,$86,$22,$B0
		.BYTE $30,$00,$00,$00,$10,$1A,$AD,$37,$36,$05,$00,$84,$01,$07,$0F,$1F
		.BYTE $08,$00,$88,$3F,$3E,$7C,$7C,$7C,$7E,$3F,$3F,$0A,$00,$82,$0F,$7F
		.BYTE $04,$FF,$08,$00,$88,$0E,$37,$73,$63,$E2,$C6,$1C,$FF,$0A,$00,$81
		.BYTE $FC,$05,$FF,$08,$00,$88,$1F,$3F,$07,$33,$67,$66,$42,$FF,$0B,$00
		.BYTE $85,$80,$E0,$F0,$F8,$F8,$08,$00,$88,$1C,$1C,$3E,$3E,$FE,$7E,$7C
		.BYTE $FC,$08,$00,$85,$1F,$1F,$0F,$07,$01,$1B,$00,$05,$FF,$82,$3F,$01
		.BYTE $19,$00,$04,$FF,$84,$FE,$F0,$C0,$E0,$08,$00,$83,$30,$18,$04,$0D
		.BYTE $00,$84,$F8,$F0,$E0,$80,$20,$00,$84,$01,$07,$0F,$1F,$08,$00,$88
		.BYTE $3F,$3F,$7F,$7E,$7C,$7B,$31,$3F,$0A,$00,$82,$0F,$7F,$04,$FF,$08
		.BYTE $00,$88,$CE,$8F,$4F,$CF,$0E,$CE,$84,$FF,$25,$00,$C2,$01,$03,$04
		.BYTE $08,$0C,$0E,$2C,$30,$30,$38,$1C,$08,$0C,$0E,$0C,$40,$41,$40,$63
		.BYTE $00,$00,$00,$08,$04,$01,$1E,$2E,$3F,$1F,$0F,$17,$1B,$C6,$E7,$D1
		.BYTE $00,$00,$40,$C0,$00,$00,$70,$30,$00,$00,$20,$70,$F0,$F8,$70,$B0
		.BYTE $4C,$0E,$7F,$F0,$20,$C0,$00,$00,$C0,$F1,$80,$0F,$D0,$20,$E0,$07
		.BYTE $00,$82,$02,$02,$06,$00,$85,$02,$02,$06,$F6,$E6,$05,$00,$84,$06
		.BYTE $06,$16,$E0,$04,$00,$05,$02,$83,$04,$00,$00,$05,$02,$81,$04,$12
		.BYTE $00,$84,$14,$10,$03,$01,$04,$00,$86,$6B,$6F,$1C,$06,$03,$01,$14
		.BYTE $00,$03,$C0,$99,$40,$00,$00,$80,$80,$00,$20,$20,$B0,$F0,$F0,$00
		.BYTE $20,$40,$80,$80,$20,$00,$00,$60,$20,$40,$80,$80,$20,$05,$00,$9D
		.BYTE $08,$0C,$0E,$2C,$30,$00,$00,$00,$08,$0C,$0E,$0C,$40,$30,$38,$1C
		.BYTE $00,$00,$00,$08,$04,$41,$40,$63,$3F,$1F,$0F,$17,$1B,$05,$00,$82
		.BYTE $40,$C0,$06,$00,$93,$20,$70,$F0,$00,$70,$30,$4C,$0E,$7F,$F0,$20
		.BYTE $F8,$70,$B0,$C0,$F1,$80,$0F,$D0,$11,$00,$8E,$02,$02,$06,$F6,$E6
		.BYTE $00,$00,$00,$02,$02,$06,$06,$16,$E0,$04,$00,$05,$02,$83,$01,$03
		.BYTE $04,$05,$02,$81,$04,$07,$00,$81,$04,$07,$00,$90,$01,$1E,$2E,$14
		.BYTE $10,$03,$01,$00,$C6,$E7,$D1,$6B,$6F,$1C,$06,$03,$06,$00,$83,$01
		.BYTE $00,$01,$05,$00,$83,$01,$00,$C0,$04,$00,$03,$C0,$98,$20,$E0,$00
		.BYTE $80,$80,$00,$20,$20,$40,$00,$00,$00,$40,$80,$00,$A0,$B0,$F0,$F0
		.BYTE $60,$40,$80,$00,$A0,$15,$00,$83,$03,$1B,$5C,$04,$00,$84,$03,$1C
		.BYTE $64,$A3,$10,$00,$9F,$10,$30,$00,$00,$0C,$1C,$30,$20,$08,$1C,$3C
		.BYTE $7E,$0C,$9C,$F0,$E0,$00,$01,$0D,$1C,$1C,$00,$00,$00,$01,$02,$0C
		.BYTE $1C,$1C,$01,$01,$06,$00,$82,$0F,$10,$06,$00,$C3,$0F,$10,$00,$80
		.BYTE $C1,$01,$04,$24,$5F,$3F,$02,$70,$0E,$3E,$9B,$CC,$A0,$C0,$FD,$00
		.BYTE $00,$00,$08,$38,$D9,$00,$00,$02,$78,$3C,$30,$00,$C1,$00,$00,$70
		.BYTE $E0,$C0,$00,$00,$E0,$50,$00,$80,$10,$30,$78,$18,$08,$A4,$F4,$00
		.BYTE $00,$41,$BB,$80,$00,$C0,$20,$F6,$2E,$45,$BB,$80,$00,$C0,$20,$12
		.BYTE $00,$82,$80,$D6,$06,$00,$82,$80,$D6,$04,$00,$90,$04,$07,$07,$06
		.BYTE $06,$02,$00,$00,$03,$00,$00,$01,$01,$05,$07,$00,$04,$02,$84,$00
		.BYTE $00,$04,$00,$04,$02,$8D,$00,$00,$04,$00,$90,$10,$30,$70,$70,$20
		.BYTE $00,$00,$60,$04,$00,$83,$50,$70,$00,$04,$20,$84,$00,$00,$10,$00
		.BYTE $04,$20,$94,$00,$00,$10,$00,$94,$14,$38,$70,$70,$20,$00,$00,$64
		.BYTE $04,$08,$00,$00,$50,$70,$00,$04,$20,$84,$00,$00,$10,$00,$04,$20
		.BYTE $83,$00,$00,$10,$05,$00,$BA,$01,$00,$00,$06,$00,$01,$01,$00,$01
		.BYTE $00,$06,$08,$0F,$0F,$01,$11,$18,$08,$00,$07,$10,$10,$06,$16,$1B
		.BYTE $08,$03,$00,$00,$E0,$00,$C0,$E0,$C0,$00,$B0,$00,$C0,$20,$C0,$E0
		.BYTE $C0,$10,$88,$78,$F8,$E0,$E4,$EC,$88,$E0,$F0,$04,$04,$10,$14,$0C
		.BYTE $88,$04,$00,$BE,$06,$0C,$31,$70,$EE,$CE,$00,$01,$07,$0C,$31,$70
		.BYTE $E0,$D0,$07,$03,$03,$01,$00,$00,$00,$07,$38,$0C,$04,$06,$03,$00
		.BYTE $03,$00,$00,$E0,$00,$C0,$E0,$C0,$00,$B0,$00,$C0,$20,$C0,$E0,$C0
		.BYTE $10,$88,$78,$F0,$F0,$E0,$E4,$84,$E4,$F4,$04,$0C,$04,$10,$04,$84
		.BYTE $04,$04,$04,$00,$BA,$01,$00,$00,$02,$00,$00,$01,$00,$01,$00,$06
		.BYTE $0C,$07,$07,$01,$11,$18,$08,$00,$07,$18,$18,$06,$16,$1B,$08,$03
		.BYTE $00,$00,$40,$60,$00,$E0,$C0,$00,$B0,$00,$80,$80,$00,$E0,$C0,$10
		.BYTE $88,$78,$F0,$E0,$04,$EC,$88,$E0,$F0,$04,$0C,$10,$F4,$0C,$88,$04
		.BYTE $00,$BE,$06,$0C,$31,$70,$EE,$CE,$00,$00,$07,$0C,$31,$70,$E0,$D0
		.BYTE $07,$03,$03,$01,$00,$00,$00,$07,$38,$0C,$04,$06,$03,$00,$03,$00
		.BYTE $00,$40,$60,$00,$E0,$C0,$00,$B0,$00,$80,$80,$00,$E0,$C0,$10,$88
		.BYTE $78,$F0,$E0,$00,$E4,$84,$E4,$F4,$04,$0C,$14,$F0,$04,$84,$04,$04
		.BYTE $04,$00,$FE,$01,$00,$00,$02,$00,$01,$01,$02,$01,$00,$06,$0C,$07
		.BYTE $07,$01,$01,$00,$00,$00,$07,$18,$18,$1E,$16,$1B,$08,$03,$00,$40
		.BYTE $60,$00,$00,$E0,$C0,$00,$B0,$80,$C0,$E0,$10,$E0,$C0,$10,$88,$78
		.BYTE $F0,$E0,$00,$E2,$80,$E0,$F4,$04,$0C,$14,$F4,$04,$82,$02,$06,$00
		.BYTE $00,$06,$0C,$11,$10,$0E,$0E,$00,$01,$07,$0E,$31,$70,$E0,$F0,$07
		.BYTE $03,$03,$01,$00,$00,$00,$07,$38,$0C,$04,$06,$03,$00,$03,$00,$40
		.BYTE $60,$00,$00,$E0,$C0,$00,$B0,$80,$C0,$E0,$10,$E0,$C0,$10,$88,$78
		.BYTE $F0,$E0,$00,$E2,$80,$E0,$F4,$04,$0C,$14,$F4,$04,$82,$02,$06,$91
		.BYTE $15,$9D,$32,$74,$74,$24,$04,$04,$61,$05,$02,$04,$04,$54,$74,$04
		.BYTE $26,$24,$26,$26,$06,$06,$12,$00,$26,$24,$26,$26,$06,$06,$12,$FF
		SECTION_END "CHR Ending B"

		BANK_END 3,$C000