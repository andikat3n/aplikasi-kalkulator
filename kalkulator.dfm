object formutama: Tformutama
  Left = 0
  Top = 0
  Caption = 'formutama'
  ClientHeight = 278
  ClientWidth = 254
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Consolas'
  Font.Style = []
  TextHeight = 24
  object Txthasil: TEdit
    Left = 0
    Top = 0
    Width = 254
    Height = 32
    Align = alTop
    Alignment = taRightJustify
    Enabled = False
    TabOrder = 0
    Text = '0'
    ExplicitWidth = 250
  end
  object Btn7: TButton
    Left = 8
    Top = 38
    Width = 49
    Height = 43
    Caption = '7'
    TabOrder = 1
    OnClick = Btn7Click
    OnKeyPress = Btn7KeyPress
  end
  object Btn8: TButton
    Left = 63
    Top = 38
    Width = 49
    Height = 43
    Caption = '8'
    TabOrder = 2
    OnClick = Btn8Click
    OnKeyPress = Btn8KeyPress
  end
  object Btn9: TButton
    Left = 118
    Top = 38
    Width = 49
    Height = 43
    Caption = '9'
    TabOrder = 3
    OnClick = Btn9Click
    OnKeyPress = Btn9KeyPress
  end
  object Btn4: TButton
    Left = 8
    Top = 87
    Width = 49
    Height = 43
    Caption = '4'
    TabOrder = 4
    OnClick = Btn4Click
    OnKeyPress = Btn4KeyPress
  end
  object Btn5: TButton
    Left = 63
    Top = 87
    Width = 49
    Height = 43
    Caption = '5'
    TabOrder = 5
    OnClick = Btn5Click
    OnKeyPress = Btn5KeyPress
  end
  object Btn6: TButton
    Left = 118
    Top = 87
    Width = 49
    Height = 43
    Caption = '6'
    TabOrder = 6
    OnClick = Btn6Click
    OnKeyPress = Btn6KeyPress
  end
  object Btn1: TButton
    Left = 8
    Top = 136
    Width = 49
    Height = 43
    Caption = '1'
    TabOrder = 7
    OnClick = Btn1Click
    OnKeyPress = Btn1KeyPress
  end
  object Btn2: TButton
    Left = 63
    Top = 136
    Width = 49
    Height = 43
    Caption = '2'
    TabOrder = 8
    OnClick = Btn2Click
    OnKeyPress = Btn2KeyPress
  end
  object Btn3: TButton
    Left = 118
    Top = 136
    Width = 49
    Height = 43
    Caption = '3'
    TabOrder = 9
    OnClick = Btn3Click
    OnKeyPress = Btn3KeyPress
  end
  object Btnhitung: TButton
    Left = 118
    Top = 185
    Width = 49
    Height = 43
    Caption = '='
    TabOrder = 10
    OnClick = BtnhitungClick
    OnKeyPress = BtnhitungKeyPress
  end
  object Btntitik: TButton
    Left = 63
    Top = 185
    Width = 49
    Height = 43
    Caption = '.'
    TabOrder = 11
    OnClick = BtntitikClick
    OnKeyPress = BtntitikKeyPress
  end
  object Btn0: TButton
    Left = 8
    Top = 185
    Width = 49
    Height = 43
    Caption = '0'
    TabOrder = 12
    OnClick = Btn0Click
    OnKeyPress = Btn0KeyPress
  end
  object Btntambah: TButton
    Left = 184
    Top = 38
    Width = 49
    Height = 43
    Caption = '+'
    TabOrder = 13
    OnClick = BtntambahClick
    OnKeyPress = BtntambahKeyPress
  end
  object Btnkurang: TButton
    Left = 184
    Top = 87
    Width = 49
    Height = 43
    Caption = '-'
    TabOrder = 14
    OnClick = BtnkurangClick
    OnKeyPress = BtnkurangKeyPress
  end
  object Btnkali: TButton
    Left = 184
    Top = 136
    Width = 49
    Height = 43
    Caption = 'x'
    TabOrder = 15
    OnClick = BtnkaliClick
    OnKeyPress = BtnkaliKeyPress
  end
  object Btnbagi: TButton
    Left = 184
    Top = 185
    Width = 49
    Height = 43
    Caption = ':'
    TabOrder = 16
    OnClick = BtnbagiClick
    OnKeyPress = BtnbagiKeyPress
  end
  object Btnkosong: TButton
    Left = 63
    Top = 234
    Width = 104
    Height = 43
    Caption = 'Clear'
    TabOrder = 17
    OnClick = BtnkosongClick
    OnKeyPress = BtnkosongKeyPress
  end
  object Btnhapus: TButton
    Left = 184
    Top = 234
    Width = 49
    Height = 43
    Caption = 'C'
    TabOrder = 18
    OnClick = BtnhapusClick
    OnKeyPress = BtnhapusKeyPress
  end
end
