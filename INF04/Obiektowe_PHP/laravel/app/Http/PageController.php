<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;

class PageController extends Controller
{
    public function index()
    {
        return view('pages.index');
    }

    public function show(string $title = "główna")
    {
        return view('pages.show', compact($title));
    }
}
