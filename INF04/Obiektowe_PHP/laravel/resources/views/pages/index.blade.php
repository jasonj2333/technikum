@extends('layout.app')

@section('title', 'Spis stron')

@section('content')
    <h1>Spis treści</h1>
    @foreach ($pages as $page)
        <p>{{ $page->title }} - {{ $page->content }}</p>
    @endforeach
@endsection