object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 430
  ClientWidth = 610
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Label1: TLabel
    Left = 16
    Top = 19
    Width = 66
    Height = 15
    Caption = 'Polinomio A'
  end
  object Label2: TLabel
    Left = 16
    Top = 75
    Width = 65
    Height = 15
    Caption = 'Polinomio B'
  end
  object Label3: TLabel
    Left = 16
    Top = 127
    Width = 66
    Height = 15
    Caption = 'Polinomio C'
  end
  object Label4: TLabel
    Left = 472
    Top = 20
    Width = 78
    Height = 15
    Caption = 'Dimensionar A'
  end
  object Label5: TLabel
    Left = 472
    Top = 76
    Width = 77
    Height = 15
    Caption = 'Dimensionar B'
  end
  object Label6: TLabel
    Left = 16
    Top = 219
    Width = 193
    Height = 15
    Caption = 'RESULTADO DE LA MULTIPLICACION'
  end
  object SGA: TStringGrid
    Left = 16
    Top = 40
    Width = 329
    Height = 25
    ColCount = 1
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 0
  end
  object SGB: TStringGrid
    Left = 16
    Top = 96
    Width = 329
    Height = 25
    ColCount = 1
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 1
  end
  object SGC: TStringGrid
    Left = 16
    Top = 148
    Width = 329
    Height = 25
    ColCount = 1
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
  object Button1: TButton
    Left = 368
    Top = 40
    Width = 83
    Height = 25
    Caption = 'Dimensionar A'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 368
    Top = 96
    Width = 83
    Height = 25
    Caption = 'Dimensionar B'
    TabOrder = 4
    OnClick = Button2Click
  end
  object EDimensionA: TEdit
    Left = 472
    Top = 41
    Width = 121
    Height = 23
    TabOrder = 5
  end
  object EDimensionB: TEdit
    Left = 472
    Top = 97
    Width = 121
    Height = 23
    TabOrder = 6
  end
  object EResultado: TEdit
    Left = 16
    Top = 240
    Width = 321
    Height = 33
    TabOrder = 7
  end
  object MainMenu1: TMainMenu
    Left = 504
    Top = 256
    object Funciones1: TMenuItem
      Caption = 'Funciones '
    end
    object Procedimientos1: TMenuItem
      Caption = 'Procedimientos'
      object Suma1: TMenuItem
        Caption = 'Suma'
        OnClick = Suma1Click
      end
      object Resta1: TMenuItem
        Caption = 'Resta'
        OnClick = Resta1Click
      end
      object Derivar1: TMenuItem
        Caption = 'Derivar'
        OnClick = Derivar1Click
      end
      object multiplicar1: TMenuItem
        Caption = 'multiplicar'
        OnClick = multiplicar1Click
      end
      object integrar1: TMenuItem
        Caption = 'integrar'
        OnClick = integrar1Click
      end
      object integrar2: TMenuItem
        Caption = 'division'
        OnClick = integrar2Click
      end
    end
  end
end
