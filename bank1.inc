
		ORG $8000

		BANK_START $01

		SECTION_START
		FAR_PTR _chr02_PO_COME
		INCLUDE "..\PO_COME.inc"
		SECTION_END "CHR PO_COME"

		SECTION_START
		FAR_PTR _chr08_titleA
		.BYTE $00,$10,$20,$00,$90,$07,$0F,$0F,$07,$01,$2C,$02,$00,$18,$10,$10
		.BYTE $38,$7E,$7F,$FF,$E7,$08,$00,$81,$C1,$07,$00,$99,$80,$C0,$E0,$E0
		.BYTE $70,$D0,$B0,$70,$40,$20,$10,$10,$88,$28,$48,$88,$70,$00,$20,$20
		.BYTE $20,$00,$20,$00,$88,$05,$78,$83,$7E,$7F,$01,$04,$03,$84,$01,$07
		.BYTE $07,$06,$04,$04,$A6,$06,$08,$08,$01,$04,$08,$10,$20,$00,$00,$00
		.BYTE $0E,$1F,$3F,$7F,$FF,$F9,$78,$3C,$E0,$E0,$E8,$D4,$C8,$D4,$CA,$84
		.BYTE $18,$18,$14,$2A,$36,$2B,$35,$7B,$18,$60,$80,$05,$00,$98,$F6,$F8
		.BYTE $E0,$80,$80,$80,$00,$00,$07,$0F,$07,$06,$01,$5D,$01,$00,$18,$10
		.BYTE $08,$09,$FE,$FE,$FE,$FF,$08,$00,$82,$E0,$C0,$06,$00,$99,$C0,$E0
		.BYTE $F0,$38,$F8,$F8,$F0,$00,$20,$10,$08,$C4,$04,$04,$0C,$FC,$28,$00
		.BYTE $20,$20,$20,$00,$20,$00,$54,$05,$78,$82,$7E,$7F,$06,$00,$BA,$07
		.BYTE $0F,$00,$00,$00,$01,$01,$07,$08,$10,$1F,$6D,$73,$77,$27,$1B,$18
		.BYTE $03,$60,$F2,$FC,$F8,$78,$3C,$3F,$1C,$00,$00,$78,$F8,$80,$70,$70
		.BYTE $40,$00,$78,$8C,$0C,$78,$F8,$F8,$F0,$80,$C0,$D0,$C2,$DA,$9A,$00
		.BYTE $00,$60,$30,$2A,$3F,$3F,$7F,$9E,$80,$07,$00,$81,$01,$06,$00,$B2
		.BYTE $01,$02,$03,$07,$04,$03,$07,$01,$00,$02,$04,$08,$0B,$0F,$0F,$07
		.BYTE $03,$05,$00,$1E,$3E,$20,$1C,$2C,$F0,$F0,$1E,$23,$43,$5E,$3E,$DE
		.BYTE $0C,$08,$F8,$D8,$B8,$70,$90,$EC,$7C,$80,$04,$24,$44,$88,$EC,$FE
		.BYTE $FE,$7C,$06,$00,$BA,$1F,$5F,$00,$00,$00,$01,$01,$3F,$60,$E0,$5F
		.BYTE $6F,$4F,$6F,$0F,$0F,$07,$08,$E0,$F0,$F0,$F0,$70,$10,$08,$17,$00
		.BYTE $00,$78,$F8,$80,$70,$30,$A0,$00,$78,$8C,$0C,$78,$F8,$F8,$70,$C0
		.BYTE $E0,$F0,$F6,$6E,$1C,$00,$00,$20,$10,$0E,$0F,$9F,$FE,$FC,$C0,$13
		.BYTE $00,$8D,$01,$13,$0F,$0F,$0F,$00,$00,$00,$01,$10,$08,$03,$08,$15
		.BYTE $00,$83,$C0,$C0,$40,$05,$00,$83,$40,$40,$40,$26,$00,$08,$01,$92
		.BYTE $03,$03,$00,$00,$01,$01,$13,$0F,$0F,$0F,$01,$01,$03,$03,$14,$08
		.BYTE $03,$08,$17,$00,$81,$60,$06,$00,$8A,$70,$F8,$F0,$B0,$90,$C0,$A0
		.BYTE $40,$A0,$40,$04,$F8,$94,$F0,$F0,$F0,$E0,$80,$80,$00,$00,$00,$C0
		.BYTE $C0,$40,$C0,$C0,$80,$80,$80,$40,$40,$40,$04,$00,$04,$01,$84,$00
		.BYTE $00,$00,$01,$04,$02,$AD,$01,$01,$01,$00,$00,$00,$01,$01,$03,$03
		.BYTE $03,$01,$01,$01,$03,$03,$02,$01,$02,$01,$01,$03,$07,$0F,$07,$03
		.BYTE $07,$03,$03,$00,$03,$08,$07,$07,$04,$00,$04,$00,$00,$00,$04,$00
		.BYTE $00,$04,$04,$05,$00,$81,$60,$04,$F0,$B6,$B0,$00,$60,$90,$08,$08
		.BYTE $88,$68,$78,$D0,$C0,$60,$A0,$80,$80,$80,$40,$78,$78,$B0,$F0,$F0
		.BYTE $E0,$E0,$E0,$80,$00,$80,$00,$00,$00,$80,$C0,$C0,$80,$C0,$80,$80
		.BYTE $00,$00,$40,$80,$80,$80,$00,$40,$00,$00,$00,$80,$00,$00,$40,$40
		.BYTE $18,$00,$8B,$01,$07,$07,$00,$00,$00,$01,$03,$06,$0E,$0C,$11,$00
		.BYTE $90,$0E,$1F,$FF,$F6,$E0,$8A,$20,$0F,$3F,$E9,$C0,$9F,$3F,$F5,$DB
		.BYTE $07,$07,$00,$85,$09,$07,$03,$01,$01,$13,$00,$FE,$50,$C0,$20,$A0
		.BYTE $90,$50,$50,$28,$A8,$30,$F0,$F0,$F8,$F8,$F8,$7C,$28,$10,$10,$04
		.BYTE $08,$00,$04,$00,$7C,$3C,$3C,$1E,$1E,$0E,$0F,$07,$03,$01,$01,$06
		.BYTE $0F,$0F,$03,$03,$04,$07,$03,$07,$0C,$0C,$07,$04,$05,$06,$02,$04
		.BYTE $02,$00,$01,$00,$02,$01,$05,$07,$03,$03,$01,$00,$80,$C0,$80,$80
		.BYTE $E0,$F0,$B0,$80,$40,$80,$80,$40,$60,$30,$F0,$40,$40,$C0,$C0,$40
		.BYTE $40,$40,$80,$80,$80,$00,$00,$80,$C0,$C0,$80,$80,$00,$00,$00,$03
		.BYTE $07,$07,$3F,$7F,$00,$00,$03,$07,$0E,$3C,$70,$E7,$7D,$7C,$7C,$3A
		.BYTE $05,$0A,$09,$05,$C6,$87,$8B,$75,$3A,$1D,$B2,$1F,$0F,$00,$1E,$3F
		.BYTE $FF,$FF,$FF,$EE,$EA,$1E,$2D,$D2,$00,$11,$1E,$31,$D5,$C4,$A2,$44
		.BYTE $20,$00,$00,$40,$40,$3B,$5D,$BB,$DE,$E0,$C0,$E0,$E0,$05,$02,$02
		.BYTE $01,$01,$00,$00,$00,$0F,$07,$07,$03,$03,$01,$01,$01,$10,$00,$8A
		.BYTE $40,$80,$A0,$20,$40,$C0,$90,$A0,$E0,$E0,$04,$F0,$DC,$F8,$F8,$40
		.BYTE $50,$28,$20,$14,$14,$08,$08,$F8,$F8,$7C,$7C,$3E,$3E,$1E,$1F,$02
		.BYTE $05,$00,$01,$06,$06,$0B,$1F,$0F,$0E,$0F,$07,$0F,$0F,$1C,$3C,$1B
		.BYTE $00,$04,$01,$06,$0E,$0E,$08,$1F,$1F,$03,$06,$01,$01,$01,$07,$40
		.BYTE $C0,$40,$80,$80,$60,$E0,$D0,$F0,$30,$B0,$E0,$C0,$E0,$60,$30,$B0
		.BYTE $70,$00,$C0,$80,$60,$E0,$E0,$F8,$B8,$F0,$30,$60,$80,$00,$00,$04
		.BYTE $02,$01,$00,$01,$00,$00,$00,$07,$03,$04,$01,$12,$00,$8C,$E0,$60
		.BYTE $00,$00,$40,$00,$00,$40,$00,$80,$E0,$E0,$04,$C0,$15,$00,$83,$01
		.BYTE $01,$01,$04,$00,$98,$01,$02,$02,$02,$01,$1F,$3F,$7F,$7F,$7F,$3F
		.BYTE $5F,$1E,$20,$5C,$BE,$B8,$90,$C0,$F0,$00,$00,$00,$7C,$04,$FF,$88
		.BYTE $00,$00,$7D,$83,$38,$78,$60,$41,$04,$FF,$8E,$FE,$F5,$EA,$81,$01
		.BYTE $02,$04,$78,$41,$4A,$55,$FE,$00,$7E,$06,$FF,$D0,$7E,$B9,$7C,$24
		.BYTE $00,$01,$02,$84,$FF,$FC,$3A,$54,$AA,$14,$88,$00,$78,$03,$C5,$AB
		.BYTE $55,$EB,$76,$9C,$4A,$15,$40,$29,$25,$14,$12,$0A,$B5,$EA,$FF,$7F
		.BYTE $7F,$3F,$3F,$1F,$09,$05,$05,$02,$02,$01,$01,$00,$1F,$0F,$0F,$07
		.BYTE $07,$03,$03,$01,$88,$54,$08,$20,$20,$90,$90,$50,$77,$AA,$F4,$F8
		.BYTE $F0,$F8,$F8,$F8,$48,$48,$28,$A8,$A4,$54,$54,$AA,$04,$FC,$A4,$FE
		.BYTE $FE,$FE,$FF,$AA,$5A,$55,$35,$2D,$1A,$16,$05,$FF,$FF,$FF,$7F,$7F
		.BYTE $3F,$3F,$1F,$0B,$07,$06,$05,$03,$01,$01,$00,$1F,$1F,$0F,$0F,$07
		.BYTE $03,$03,$01,$05,$00,$EB,$80,$80,$80,$00,$00,$80,$80,$80,$C0,$C0
		.BYTE $C0,$80,$40,$C0,$C0,$A0,$60,$60,$20,$C0,$E0,$E0,$E0,$F0,$F0,$F0
		.BYTE $F8,$44,$0B,$2B,$28,$19,$01,$0C,$0D,$FF,$FC,$7C,$7F,$3F,$1F,$1F
		.BYTE $1E,$0D,$38,$78,$73,$07,$01,$02,$01,$3E,$7F,$FF,$FF,$7F,$0F,$0D
		.BYTE $1E,$22,$D0,$E4,$24,$98,$A0,$18,$D8,$FF,$BF,$9E,$DE,$FC,$F8,$FC
		.BYTE $3C,$D8,$8C,$2E,$56,$66,$00,$40,$80,$3E,$7E,$DF,$EF,$FF,$FE,$B0
		.BYTE $70,$0C,$1E,$1E,$0E,$00,$08,$04,$02,$13,$21,$21,$31,$3F,$1F,$0F
		.BYTE $07,$05,$00,$8C,$01,$00,$00,$03,$03,$03,$01,$03,$03,$01,$00,$20
		.BYTE $05,$70,$83,$30,$30,$D0,$05,$88,$86,$C8,$C8,$40,$80,$80,$80,$04
		.BYTE $00,$84,$F8,$F0,$F0,$F0,$04,$E0,$10,$00,$81,$FF,$16,$00,$81,$0F
		.BYTE $08,$00,$90,$F0,$00,$03,$06,$04,$7B,$00,$0F,$00,$00,$00,$01,$03
		.BYTE $03,$4C,$40,$07,$00,$81,$F0,$06,$00,$92,$0F,$0F,$07,$0F,$DA,$00
		.BYTE $00,$FF,$00,$0E,$07,$00,$05,$8F,$DF,$FF,$00,$CF,$07,$00,$81,$7F
		.BYTE $06,$00,$92,$80,$80,$00,$F0,$B8,$08,$F0,$01,$FF,$00,$00,$00,$40
		.BYTE $F8,$F6,$00,$00,$FF,$06,$00,$81,$FF,$0E,$00,$83,$FC,$FF,$24,$07
		.BYTE $00,$81,$DB,$06,$00,$81,$F8,$0E,$00,$83,$40,$FF,$54,$07,$00,$81
		.BYTE $AB,$15,$00,$83,$03,$FC,$DA,$06,$00,$82,$03,$27,$10,$00,$9F,$42
		.BYTE $E7,$76,$04,$20,$6E,$FF,$72,$00,$00,$00,$78,$C6,$90,$18,$B0,$02
		.BYTE $04,$08,$00,$0C,$06,$01,$00,$00,$03,$07,$0F,$0F,$07,$01,$11,$00
		.BYTE $81,$09,$04,$0F,$8B,$00,$C0,$3F,$40,$40,$F0,$F0,$F0,$FF,$FF,$3F
		.BYTE $10,$00,$90,$36,$36,$06,$39,$46,$39,$0E,$B1,$87,$87,$87,$B9,$7E
		.BYTE $47,$81,$B0,$11,$00,$87,$30,$30,$81,$60,$B0,$58,$9F,$04,$FF,$84
		.BYTE $7F,$BF,$DF,$5F,$12,$00,$85,$69,$FF,$1F,$AB,$57,$09,$FF,$82,$00
		.BYTE $01,$06,$00,$82,$08,$01,$08,$00,$86,$63,$FF,$FF,$C0,$C0,$80,$05
		.BYTE $FF,$86,$C0,$C0,$80,$00,$C0,$80,$05,$00,$83,$80,$40,$80,$05,$00
		.BYTE $84,$01,$07,$3F,$F8,$04,$00,$86,$FF,$FF,$FF,$F8,$10,$10,$12,$00
		.BYTE $83,$60,$C0,$80,$05,$00,$83,$E0,$C0,$80,$1C,$00,$81,$52,$06,$00
		.BYTE $92,$80,$80,$00,$F0,$B8,$08,$F0,$01,$FF,$00,$00,$00,$40,$F8,$F6
		.BYTE $00,$00,$FF,$15,$00,$83,$FC,$FF,$24,$07,$00,$81,$DB,$15,$00,$83
		.BYTE $40,$FF,$54,$07,$00,$81,$AB,$10,$00,$90,$18,$18,$18,$E7,$E7,$18
		.BYTE $18,$38,$00,$00,$00,$18,$00,$E4,$E0,$E0,$12,$00,$8E,$03,$06,$04
		.BYTE $7B,$00,$0F,$00,$00,$00,$01,$03,$03,$4C,$40,$07,$00,$81,$07,$06
		.BYTE $00,$92,$0F,$08,$07,$0F,$DA,$00,$00,$FF,$00,$0E,$07,$00,$05,$8F
		.BYTE $DF,$FF,$00,$CF,$0E,$00,$92,$80,$80,$00,$F0,$B8,$08,$F0,$01,$FF
		.BYTE $00,$00,$00,$40,$F8,$F6,$00,$00,$FF,$07,$00,$81,$02,$0A,$00,$8E
		.BYTE $03,$06,$04,$7B,$00,$0F,$00,$00,$00,$01,$03,$03,$4C,$40,$07,$00
		.BYTE $81,$50,$06,$00,$92,$0F,$0F,$07,$0F,$DA,$00,$00,$FF,$00,$0E,$07
		.BYTE $00,$05,$8F,$DF,$FF,$00,$CF,$7E,$00,$7E,$00,$7E,$00,$14,$00,$82
		.BYTE $80,$80,$7E,$00,$7E,$00,$7E,$00,$7E,$00,$7E,$00,$7E,$00,$7E,$00
		.BYTE $7E,$00,$7E,$00,$7E,$00,$64,$00,$7F,$70,$02,$9A,$55,$AA,$55,$AA
		.BYTE $55,$AA,$FF,$FF,$55,$AA,$55,$AA,$54,$A8,$FF,$AA,$55,$A9,$55,$A9
		.BYTE $55,$A9,$FF,$FF,$40,$80,$04,$00,$92,$FF,$AA,$40,$40,$43,$01,$FD
		.BYTE $A9,$55,$A9,$40,$40,$43,$00,$FC,$00,$50,$A0,$05,$00,$82,$07,$58
		.BYTE $0C,$00,$8B,$80,$20,$83,$40,$40,$00,$00,$00,$80,$00,$80,$07,$00
		.BYTE $82,$F0,$0F,$0F,$00,$81,$FF,$0B,$00,$84,$03,$04,$18,$E0,$0F,$00
		.BYTE $83,$80,$78,$07,$0F,$00,$81,$7D,$07,$00,$81,$7D,$04,$00,$84,$C0
		.BYTE $F8,$FF,$3F,$04,$00,$84,$C0,$F8,$FF,$BF,$07,$00,$81,$01,$07,$00
		.BYTE $91,$01,$00,$16,$10,$02,$08,$00,$06,$84,$02,$0C,$00,$42,$00,$00
		.BYTE $04,$80,$15,$00,$83,$01,$1F,$9F,$05,$00,$83,$01,$1F,$9F,$04,$00
		.BYTE $84,$7F,$FF,$FF,$F2,$04,$00,$A4,$7F,$FF,$FF,$FF,$00,$00,$01,$3F
		.BYTE $FF,$FF,$FF,$BC,$00,$00,$01,$3F,$FF,$FF,$FF,$BC,$00,$18,$7C,$BE
		.BYTE $3F,$6F,$67,$3C,$00,$18,$7C,$BE,$3F,$6F,$67,$3F,$17,$00,$81,$80
		.BYTE $0D,$00,$82,$B0,$2C,$06,$00,$83,$B0,$2C,$90,$04,$00,$84,$FF,$AA
		.BYTE $55,$AA,$04,$00,$94,$FF,$00,$55,$AA,$00,$00,$03,$01,$FD,$A9,$55
		.BYTE $A9,$00,$00,$03,$00,$FC,$00,$50,$A8,$08,$FF,$08,$00,$0A,$FF,$07
		.BYTE $00,$83,$09,$87,$B4,$06,$00,$82,$12,$31,$04,$00,$8F,$70,$E5,$00
		.BYTE $00,$04,$04,$10,$00,$70,$05,$00,$00,$04,$04,$10,$06,$00,$83,$04
		.BYTE $0B,$03,$05,$00,$FE,$04,$0B,$03,$00,$02,$09,$37,$69,$E0,$A0,$80
		.BYTE $00,$02,$09,$37,$69,$E0,$A0,$80,$FF,$5F,$EC,$BA,$41,$C3,$0F,$19
		.BYTE $FF,$5F,$EC,$BA,$40,$C2,$00,$00,$7F,$97,$7F,$7F,$FF,$7F,$FF,$FF
		.BYTE $7E,$93,$0F,$0E,$27,$1E,$D2,$CC,$FF,$FF,$EF,$FE,$FF,$FF,$F3,$CF
		.BYTE $DA,$04,$04,$44,$40,$02,$02,$07,$CF,$FA,$FE,$FF,$7F,$BF,$7A,$30
		.BYTE $4E,$E8,$48,$20,$00,$03,$62,$00,$FD,$BE,$8F,$E7,$FF,$F3,$77,$CF
		.BYTE $1C,$86,$07,$67,$7F,$C0,$01,$01,$FF,$F7,$78,$5A,$97,$D8,$FE,$FD
		.BYTE $1B,$03,$00,$02,$83,$D0,$70,$7C,$60,$F0,$BE,$2F,$9F,$43,$C6,$30
		.BYTE $60,$F0,$BE,$BD,$2F,$9F,$43,$C6,$30,$00,$00,$00,$80,$80,$E0,$F8
		.BYTE $FF,$00,$00,$00,$80,$80,$E0,$F8,$FF,$55,$AA,$55,$AA,$55,$AA,$FF
		.BYTE $FF,$55,$AA,$55,$AA,$55,$AA,$FF,$AA,$55,$A9,$55,$A9,$55,$A9,$FF
		.BYTE $FF,$50,$A8,$50,$A8,$50,$A8,$FF,$AA,$1F,$2F,$1F,$2F,$1F,$2F,$1F
		.BYTE $2F,$08,$00,$81,$FE,$07,$FF,$88,$BE,$5F,$BF,$5F,$BF,$5F,$BF,$5F
		.BYTE $04,$00,$84,$03,$1F,$FF,$FF,$04,$00,$FE,$03,$1F,$FF,$FD,$00,$00
		.BYTE $00,$1E,$FF,$FE,$FF,$E1,$00,$00,$00,$1E,$FF,$FE,$FF,$E1,$04,$00
		.BYTE $81,$E1,$EA,$54,$31,$C8,$04,$00,$81,$E1,$EA,$54,$31,$C8,$00,$4C
		.BYTE $94,$44,$A1,$10,$A6,$63,$00,$4C,$94,$44,$A1,$10,$A6,$61,$75,$17
		.BYTE $37,$3F,$FF,$FF,$7E,$FE,$05,$07,$37,$3F,$97,$EF,$7E,$DE,$FF,$FF
		.BYTE $FF,$FE,$78,$FB,$C7,$1F,$E9,$DA,$C8,$E0,$00,$0B,$05,$00,$BB,$F6
		.BYTE $DC,$6E,$BE,$F9,$E9,$F7,$1B,$16,$5C,$60,$B0,$51,$01,$07,$51,$60
		.BYTE $90,$AE,$E4,$F8,$FA,$D7,$01,$00,$00,$20,$E0,$C0,$80,$00,$9D,$89
		.BYTE $13,$42,$A4,$28,$0B,$40,$01,$88,$E6,$10,$00,$00,$20,$08,$00,$BF
		.BYTE $EF,$DF,$AF,$3D,$6F,$EF,$FF,$3F,$CF,$9F,$2F,$3C,$6E,$44,$40,$A0
		.BYTE $FE,$EB,$F9,$F2,$F8,$78,$FF,$A0,$FE,$EB,$F9,$F2,$F8,$78,$FD,$EF
		.BYTE $19,$C7,$FB,$75,$1E,$1E,$0F,$EF,$19,$C7,$FB,$75,$1E,$1E,$0F,$F8
		.BYTE $FF,$BF,$29,$13,$66,$69,$FD,$F8,$FF,$BF,$29,$13,$66,$69,$FD,$00
		.BYTE $00,$E0,$FC,$DF,$FF,$F7,$E7,$00,$00,$E0,$FC,$DF,$FF,$F7,$E7,$00
		.BYTE $00,$00,$80,$F0,$F8,$FF,$F9,$00,$00,$00,$80,$F0,$F8,$FF,$FF,$07
		.BYTE $00,$81,$7F,$07,$00,$03,$FF,$81,$FB,$05,$FF,$C3,$09,$A5,$FB,$9F
		.BYTE $CF,$37,$C6,$FF,$FE,$A9,$DF,$B7,$FF,$FC,$EF,$DE,$9E,$28,$DF,$B7
		.BYTE $70,$90,$8F,$5E,$0B,$FE,$FE,$EE,$D9,$5B,$FB,$7B,$0B,$FE,$FE,$E2
		.BYTE $C0,$00,$00,$40,$49,$0F,$BF,$D3,$8F,$7F,$8A,$FA,$40,$02,$01,$03
		.BYTE $0C,$01,$00,$02,$FF,$E1,$B4,$F0,$F4,$F1,$C8,$84,$70,$E0,$A0,$05
		.BYTE $00,$87,$53,$1A,$8A,$01,$00,$00,$22,$09,$00,$8A,$0D,$5E,$19,$2C
		.BYTE $00,$6C,$60,$80,$0C,$10,$06,$00,$88,$B7,$1A,$70,$95,$03,$04,$01
		.BYTE $05,$08,$00,$88,$C0,$40,$10,$80,$08,$8C,$00,$82,$08,$00,$C0,$CB
		.BYTE $1F,$3A,$19,$12,$11,$00,$1E,$00,$00,$00,$10,$00,$00,$00,$06,$EF
		.BYTE $FE,$F6,$F3,$FF,$BB,$5F,$67,$6C,$2E,$06,$03,$07,$00,$00,$62,$BD
		.BYTE $FE,$FE,$DF,$FF,$EF,$BF,$FF,$1D,$06,$02,$00,$01,$83,$01,$00,$FF
		.BYTE $3F,$FF,$AF,$7E,$7B,$7F,$FE,$EB,$30,$F8,$AC,$7E,$63,$71,$F8,$05
		.BYTE $FF,$9B,$3F,$1E,$4F,$FF,$47,$22,$06,$08,$00,$02,$40,$EF,$FF,$FF
		.BYTE $FF,$0B,$FF,$F7,$F4,$EC,$FE,$F3,$F9,$08,$3E,$06,$04,$08,$FF,$BF
		.BYTE $3F,$07,$80,$A0,$D0,$38,$0C,$0B,$FF,$9E,$EE,$BF,$E9,$7B,$11,$8A
		.BYTE $FB,$0A,$AE,$BF,$E9,$73,$11,$8A,$BB,$3F,$3F,$DD,$7E,$FC,$E8,$F0
		.BYTE $38,$31,$27,$C4,$1E,$34,$68,$B0,$FF,$F7,$02,$1D,$19,$52,$20,$7C
		.BYTE $00,$00,$00,$14,$00,$40,$20,$00,$41,$80,$88,$00,$00,$44,$04,$09
		.BYTE $00,$84,$88,$60,$C0,$10,$0C,$00,$84,$41,$37,$84,$80,$0C,$00,$85
		.BYTE $04,$0C,$30,$08,$40,$0B,$00,$83,$02,$08,$10,$11,$00,$82,$80,$20
		.BYTE $0A,$00,$89,$97,$45,$62,$91,$08,$00,$01,$00,$03,$07,$00,$98,$03
		.BYTE $08,$17,$07,$05,$00,$00,$02,$01,$00,$11,$01,$05,$00,$00,$00,$F5
		.BYTE $BA,$D0,$AA,$C2,$B4,$28,$2C,$08,$00,$FE,$AB,$61,$00,$D5,$1D,$40
		.BYTE $20,$80,$A8,$60,$00,$14,$00,$40,$20,$00,$EF,$E2,$70,$21,$E5,$20
		.BYTE $18,$42,$20,$02,$10,$01,$05,$00,$00,$42,$FF,$FE,$DE,$FF,$39,$7E
		.BYTE $FB,$39,$00,$00,$0C,$00,$09,$60,$F8,$39,$FF,$6F,$77,$E7,$00,$80
		.BYTE $01,$28,$1F,$2B,$30,$00,$00,$80,$01,$28,$7F,$7A,$00,$00,$00,$2E
		.BYTE $2E,$2E,$7A,$45,$00,$7F,$7F,$51,$51,$51,$FF,$00,$00,$02,$06,$76
		.BYTE $76,$76,$80,$FF,$00,$FD,$F9,$89,$89,$89,$7F,$78,$00,$00,$00,$0E
		.BYTE $2E,$2E,$40,$07,$00,$7F,$7F,$71,$51,$51,$FF,$00,$00,$02,$06,$76
		.BYTE $74,$72,$00,$E7,$00,$FD,$F9,$89,$92,$8B,$8D,$18,$38,$F8,$C8,$38
		.BYTE $F8,$C8,$C8,$00,$30,$C0,$08,$30,$C8,$08,$C8,$04,$00,$84,$0D,$0E
		.BYTE $08,$08,$04,$00,$84,$02,$01,$00,$07,$04,$00,$84,$F8,$F8,$08,$08
		.BYTE $07,$00,$93,$F0,$F8,$D0,$E0,$00,$30,$C8,$E0,$78,$F0,$20,$00,$00
		.BYTE $30,$C0,$60,$10,$00,$08,$04,$00,$84,$40,$01,$00,$08,$04,$00,$82
		.BYTE $40,$05,$04,$00,$84,$07,$3F,$FF,$7F,$04,$00,$84,$07,$3F,$FF,$7F
		.BYTE $05,$00,$83,$E0,$FE,$FD,$05,$00,$8A,$A0,$E0,$C0,$08,$10,$09,$00
		.BYTE $00,$00,$08,$0A,$00,$82,$C0,$30,$0D,$00,$81,$3D,$04,$00,$82,$10
		.BYTE $04,$09,$00,$8B,$7F,$0C,$17,$81,$40,$08,$00,$00,$64,$00,$10,$05
		.BYTE $00,$90,$A8,$43,$64,$80,$EC,$02,$00,$00,$28,$03,$64,$00,$0C,$00
		.BYTE $00,$00,$07,$3F,$82,$1F,$5E,$05,$40,$82,$60,$60,$06,$FE,$8A,$EC
		.BYTE $B0,$79,$01,$01,$00,$01,$00,$13,$6C,$05,$3F,$84,$1F,$2F,$1F,$5E
		.BYTE $04,$40,$83,$60,$50,$60,$05,$FE,$8C,$F2,$EC,$B0,$79,$01,$01,$00
		.BYTE $01,$0C,$17,$6C,$38,$07,$08,$84,$30,$08,$08,$00,$04,$08,$90,$6F
		.BYTE $CF,$07,$00,$06,$07,$01,$06,$07,$00,$00,$00,$06,$01,$00,$06,$07
		.BYTE $00,$81,$01,$0C,$00,$84,$03,$0F,$3E,$9F,$04,$00,$A4,$03,$0F,$3E
		.BYTE $8F,$1E,$31,$7F,$FA,$E5,$CD,$17,$9F,$1E,$31,$7F,$FA,$E4,$C4,$12
		.BYTE $88,$F7,$FF,$F9,$87,$99,$F2,$CE,$CB,$F7,$FF,$F9,$87,$19,$32,$0E
		.BYTE $4B,$05,$FF,$9B,$FE,$FF,$FF,$A8,$D5,$E8,$F0,$F8,$FC,$FE,$FE,$E0
		.BYTE $E0,$FE,$FB,$FA,$FF,$FF,$FF,$00,$00,$80,$88,$60,$AA,$0C,$4F,$04
		.BYTE $00,$84,$60,$50,$FE,$FB,$0F,$00,$81,$80,$0F,$00,$81,$04,$0C,$00
		.BYTE $81,$02,$07,$00,$94,$02,$00,$00,$00,$E0,$6C,$62,$F8,$FB,$F7,$F1
		.BYTE $7D,$E0,$6C,$62,$B8,$3B,$37,$11,$1D,$06,$00,$82,$F0,$FC,$06,$00
		.BYTE $82,$F0,$FC,$04,$00,$81,$02,$07,$00,$81,$02,$08,$00,$83,$07,$1F
		.BYTE $7F,$05,$00,$83,$07,$18,$6F,$04,$00,$84,$0F,$FF,$FF,$FF,$04,$00
		.BYTE $E4,$03,$AB,$B3,$FF,$00,$00,$00,$1F,$FF,$FF,$FF,$FE,$00,$00,$00
		.BYTE $1F,$FF,$FF,$FF,$FE,$02,$0D,$23,$88,$C1,$45,$0E,$1B,$02,$0C,$20
		.BYTE $80,$C0,$40,$00,$09,$F8,$FF,$BF,$FF,$BF,$67,$FF,$BF,$08,$39,$38
		.BYTE $38,$38,$20,$70,$A0,$FF,$7F,$BF,$BF,$FB,$E6,$D3,$DE,$E0,$60,$81
		.BYTE $93,$83,$06,$13,$1E,$93,$EC,$7F,$FF,$64,$6C,$FE,$FA,$13,$6C,$7F
		.BYTE $FF,$64,$6C,$E0,$00,$FF,$EB,$EF,$3F,$0F,$03,$75,$DF,$FF,$EB,$E8
		.BYTE $3C,$0E,$03,$75,$DF,$04,$FF,$BC,$BF,$FF,$7F,$BD,$10,$C2,$61,$60
		.BYTE $30,$38,$1E,$8C,$FB,$FF,$E7,$7F,$FA,$79,$DD,$EF,$C0,$3D,$46,$0F
		.BYTE $02,$01,$01,$00,$40,$E0,$F8,$E7,$FD,$DC,$FF,$FF,$00,$00,$C8,$E7
		.BYTE $FD,$DC,$FF,$FF,$00,$00,$00,$80,$F0,$F8,$FF,$FF,$00,$00,$00,$80
		.BYTE $F0,$F8,$FF,$80,$07,$00,$81,$FF,$07,$00,$B1,$7F,$FD,$FF,$FF,$FF
		.BYTE $BF,$FE,$FF,$FE,$8D,$83,$11,$40,$00,$24,$01,$06,$06,$DD,$F5,$FA
		.BYTE $FE,$A0,$80,$00,$06,$DD,$F5,$FA,$7E,$A0,$80,$00,$FB,$B7,$DB,$0F
		.BYTE $2F,$1F,$3F,$FF,$FB,$B6,$D9,$0F,$26,$06,$1A,$82,$08,$FF,$89,$7C
		.BYTE $FF,$FD,$CF,$5F,$5F,$8E,$9F,$FD,$05,$FF,$FE,$FD,$FB,$7D,$FF,$BF
		.BYTE $FF,$FF,$FF,$FD,$FB,$F8,$CC,$5A,$FD,$EA,$E1,$EF,$FD,$F8,$CC,$58
		.BYTE $F8,$E8,$E0,$E8,$E1,$12,$4A,$04,$1B,$B7,$C7,$FF,$FE,$02,$00,$00
		.BYTE $03,$02,$04,$30,$E0,$7F,$FF,$FD,$F3,$EF,$FC,$75,$FD,$60,$E0,$C0
		.BYTE $01,$01,$0C,$70,$A0,$BB,$7E,$FA,$F9,$BE,$4C,$08,$29,$18,$30,$20
		.BYTE $C0,$80,$00,$00,$00,$F8,$5F,$8A,$A8,$64,$A0,$00,$00,$00,$01,$02
		.BYTE $00,$04,$00,$00,$00,$17,$0D,$0B,$16,$42,$13,$00,$86,$17,$0D,$0B
		.BYTE $16,$42,$13,$00,$86,$F7,$FF,$FF,$7F,$97,$D6,$FB,$A5,$C6,$C6,$C3
		.BYTE $4B,$83,$86,$83,$05,$7B,$29,$F4,$D6,$88,$D6,$A1,$20,$29,$00,$00
		.BYTE $00,$80,$04,$00,$8B,$F7,$FF,$CD,$A3,$72,$18,$0A,$14,$37,$1F,$0D
		.BYTE $05,$00,$04,$FF,$8C,$8F,$FF,$B7,$D4,$81,$C0,$C0,$70,$08,$39,$04
		.BYTE $04,$08,$FF,$FE,$19,$07,$18,$04,$00,$01,$08,$03,$FE,$FE,$7F,$BF
		.BYTE $7F,$7F,$3E,$3F,$42,$80,$01,$A0,$10,$50,$20,$23,$D0,$74,$22,$18
		.BYTE $79,$F1,$CC,$C1,$D0,$74,$22,$18,$39,$41,$04,$81,$7F,$FF,$3F,$7F
		.BYTE $DE,$FF,$5F,$3F,$4C,$80,$02,$00,$C8,$80,$40,$10,$FE,$F5,$EF,$FF
		.BYTE $CE,$FE,$BF,$B9,$0E,$84,$89,$00,$02,$06,$07,$09,$F7,$FF,$FF,$FE
		.BYTE $FF,$9F,$7B,$D6,$77,$FF,$7F,$FE,$FF,$9E,$7B,$D0,$FF,$EA,$F5,$C7
		.BYTE $BD,$F7,$ED,$D1,$E7,$EA,$F4,$C0,$80,$C0,$00,$00,$FD,$F7,$BE,$7D
		.BYTE $F3,$85,$34,$80,$01,$01,$06,$00,$30,$00,$20,$00,$D6,$66,$84,$12
		.BYTE $01,$00,$83,$40,$20,$C0,$07,$00,$83,$A0,$C0,$60,$0D,$00,$81,$10
		.BYTE $07,$00,$81,$10,$07,$00,$83,$05,$00,$11,$05,$00,$83,$05,$00,$11
		.BYTE $05,$00,$8C,$64,$80,$00,$18,$00,$14,$2C,$80,$24,$00,$00,$10,$04
		.BYTE $00,$A8,$17,$25,$03,$07,$0E,$0F,$2F,$06,$04,$05,$02,$07,$0C,$09
		.BYTE $21,$00,$4D,$7C,$E6,$BF,$FF,$FD,$FF,$FF,$00,$60,$E0,$80,$3A,$CD
		.BYTE $57,$03,$DF,$3F,$8F,$97,$01,$72,$F9,$F9,$04,$00,$CF,$01,$20,$E8
		.BYTE $B9,$FF,$6F,$F7,$E7,$EE,$BB,$0F,$2A,$07,$23,$30,$00,$00,$80,$01
		.BYTE $28,$3E,$37,$29,$12,$19,$10,$22,$00,$08,$00,$01,$00,$00,$00,$02
		.BYTE $00,$B0,$7C,$CA,$08,$D2,$13,$A8,$70,$80,$60,$02,$08,$D2,$11,$20
		.BYTE $60,$7F,$3F,$7F,$D8,$EA,$08,$01,$01,$40,$00,$00,$00,$C0,$00,$00
		.BYTE $00,$F3,$E7,$E8,$80,$01,$20,$01,$00,$13,$07,$28,$05,$00,$8B,$FE
		.BYTE $08,$4C,$38,$FD,$C0,$50,$04,$E0,$00,$40,$05,$00,$84,$81,$83,$10
		.BYTE $40,$14,$00,$83,$C4,$04,$10,$06,$00,$8C,$30,$00,$04,$18,$00,$80
		.BYTE $00,$00,$30,$00,$04,$18,$10,$00,$81,$20,$0E,$00,$87,$08,$00,$00
		.BYTE $00,$02,$00,$10,$0D,$00,$82,$40,$02,$0E,$00,$84,$55,$0A,$8C,$01
		.BYTE $04,$00,$81,$40,$07,$00,$89,$B3,$65,$1F,$24,$0B,$01,$00,$00,$23
		.BYTE $07,$00,$89,$BD,$0E,$1F,$19,$72,$14,$2C,$00,$A4,$07,$00,$8D,$E8
		.BYTE $43,$E4,$89,$FC,$22,$14,$4A,$28,$03,$64,$00,$04,$05,$00,$81,$04
		.BYTE $04,$00,$98,$11,$00,$00,$04,$10,$00,$00,$00,$11,$00,$00,$08,$00
		.BYTE $00,$00,$08,$00,$00,$00,$08,$00,$00,$00,$2A,$04,$00,$81,$32,$07
		.BYTE $00,$81,$32,$06,$00,$81,$02,$07,$00,$81,$02,$08,$00,$81,$02,$07
		.BYTE $00,$81,$02,$06,$00,$83,$02,$03,$48,$05,$00,$84,$02,$00,$00,$10
		.BYTE $06,$00,$84,$08,$00,$01,$80,$04,$00,$84,$08,$00,$01,$A0,$07,$00
		.BYTE $81,$10,$0C,$00,$83,$03,$06,$C8,$05,$00,$83,$03,$06,$C8,$06,$00
		.BYTE $82,$18,$08,$06,$00,$82,$18,$08,$04,$00,$8D,$21,$40,$08,$80,$00
		.BYTE $80,$10,$04,$30,$C0,$0A,$80,$10,$07,$00,$82,$10,$20,$04,$00,$A1
		.BYTE $04,$00,$14,$00,$00,$00,$20,$20,$00,$20,$02,$00,$00,$00,$20,$20
		.BYTE $00,$20,$02,$00,$01,$00,$00,$00,$24,$00,$00,$00,$01,$00,$00,$00
		.BYTE $24,$07,$00,$83,$80,$34,$97,$04,$00,$84,$20,$82,$21,$84,$06,$00
		.BYTE $82,$A2,$40,$05,$00,$9F,$30,$22,$00,$02,$0C,$00,$00,$00,$0D,$00
		.BYTE $03,$80,$04,$00,$00,$00,$0C,$00,$03,$43,$00,$30,$00,$02,$00,$00
		.BYTE $00,$03,$00,$30,$02,$0E,$00,$81,$30,$0E,$00,$81,$22,$0B,$00,$82
		.BYTE $0C,$28,$06,$00,$86,$0C,$28,$00,$00,$00,$10,$05,$00,$82,$C8,$03
		.BYTE $07,$00,$85,$02,$00,$00,$08,$08,$06,$00,$82,$08,$08,$04,$00,$82
		.BYTE $20,$02,$06,$00,$8A,$24,$00,$00,$00,$01,$00,$00,$01,$00,$02,$04
		.BYTE $00,$8D,$04,$00,$00,$01,$04,$20,$00,$00,$80,$00,$00,$00,$10,$07
		.BYTE $00,$81,$10,$04,$00,$BE,$06,$00,$01,$11,$00,$00,$40,$00,$16,$80
		.BYTE $00,$10,$00,$00,$01,$00,$00,$EE,$46,$EE,$00,$EE,$00,$04,$00,$0C
		.BYTE $44,$0C,$00,$0C,$00,$04,$00,$D2,$08,$D2,$00,$D0,$D0,$04,$10,$D4
		.BYTE $0A,$D0,$04,$D5,$D0,$00,$A0,$A0,$00,$B4,$00,$48,$00,$00,$20,$20
		.BYTE $00,$30,$00,$48,$04,$00,$84,$90,$01,$34,$25,$05,$00,$83,$40,$B4
		.BYTE $01,$FF
		SECTION_END "CHR Title A"

		SECTION_START
		FAR_PTR _chr09_POPD_titleB
		INCLUDE "..\POPD.inc"
		SECTION_END "CHR Title B (POPD)"

		SECTION_START
		FAR_PTR _chr16_PTCD
		INCLUDE "..\PTCD.inc"
		SECTION_END "CHR Title C (PTCD)"

		SECTION_START
		FAR_PTR _chr03_PO1D
		INCLUDE "..\PO1D.inc"
		SECTION_END "CHR PO1D"

		BANK_END 1,$C000